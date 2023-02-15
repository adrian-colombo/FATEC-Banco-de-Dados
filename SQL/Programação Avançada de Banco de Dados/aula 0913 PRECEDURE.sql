-- Desenvolver uma procedure que faça o aumento de salário de um determinado funcionário, recebendo um percentual de aumento onde o percentual
-- não pode ser maior que 20%.
-- Existem algumas regras que devem ser seguidas:
--  caso o funcionário seja presidente ou vice presidente não deve ser processado o aumento.
-- O teto máximo que um funcionário pode ter de salário é 10.000
-- Caso todas as regras sejam seguidas deve ser aumentado do salário, caso não retornar códigos de controle (erros), tratar exception others com tabela de log.
----------------------------------------------------------------------------------------------------------------------------------------------------------------


-- Cópia da tabela employees
CREATE TABLE FUNCIONARIOS AS (SELECT * FROM EMPLOYEES);

-- Procedure do aumento de salário
CREATE OR REPLACE
PROCEDURE PROC_AUMENTASALARIO    (  P_ID IN HR.FUNCIONARIOS.EMPLOYEE_ID%TYPE,
                                    P_PERCENTUAL IN NUMBER,
                                    P_RETORNO OUT NUMBER)
IS
    V_QTDE NUMBER(1);
    V_ERRO NUMBER;
    V_DESCERRO VARCHAR2(500);
    V_JOB_ID HR.FUNCIONARIOS.JOB_ID%TYPE;
    V_SALARY HR.FUNCIONARIOS.SALARY%TYPE;

BEGIN
    IF P_PERCENTUAL > 0 AND P_PERCENTUAL <= 20 THEN
        SELECT COUNT (*) INTO V_QTDE FROM FUNCIONARIOS WHERE EMPLOYEE_ID = P_ID;
        IF V_QTDE = 1 THEN
            SELECT JOB_ID, SALARY
            INTO V_JOB_ID, V_SALARY
            FROM FUNCIONARIOS
            WHERE EMPLOYEE_ID = P_ID;
            
            IF UPPER(V_JOB_ID) <> 'AD_PRES' AND UPPER(V_JOB_ID) <> 'AD_VP' THEN  
                IF V_SALARY < 10000 THEN
                    V_SALARY := V_SALARY + (V_SALARY * (P_PERCENTUAL/100));
                    IF V_SALARY > 10000 THEN
                        V_SALARY := 10000;
                    END IF;
                    UPDATE FUNCIONARIOS SET SALARY = V_SALARY WHERE EMPLOYEE_ID = P_ID;
                    P_RETORNO := 0;
                ELSE
                    P_RETORNO := -996; 
                END IF;
            ELSE
                P_RETORNO := -997;
            END IF;
        ELSE 
            P_RETORNO := -998;
        END IF;
    ELSE 
        P_RETORNO := -999;
    END IF;
COMMIT;
EXCEPTION
    WHEN OTHERS THEN
    P_RETORNO := SQLCODE;
    V_ERRO := SQLCODE;
    V_DESCERRO := SQLERRM;
INSERT INTO LOG_ERROEXECUCAO (
ID_LOG,
NOMEPROG,
PARAMENTRADA,
CODERRO,
DESCERRO,
LINHAERRO,
USUARIO,
DATAHORA,
STATUS,
DESCSOLUCAO
) VALUES (
SEQ_ERROEXEC_LOGID.NEXTVAL,
'PROC_PROJETAAUMSALARIO',
'P_ID = ' || P_ID || 'P_PERCENTUAL = ' || P_PERCENTUAL,
V_ERRO,
V_DESCERRO,
DBMS_UTILITY.FORMAT_ERROR_BACKTRACE(),
USER,
SYSDATE,
'E',
NULL
);

END;