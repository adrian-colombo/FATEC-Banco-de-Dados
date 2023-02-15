-- Função

CREATE OR REPLACE FUNCTION
FUNC_AUMENTASALARIO    (  P_ID IN HR.FUNCIONARIOS.EMPLOYEE_ID%TYPE,
                                    P_PERCENTUAL IN NUMBER )

RETURN NUMBER 

IS
    V_QTDE NUMBER(1);
    V_ERRO NUMBER;
    V_DESCERRO VARCHAR2(500);
    V_JOB_ID HR.FUNCIONARIOS.JOB_ID%TYPE;
    V_SALARY HR.FUNCIONARIOS.SALARY%TYPE;
    P_RETORNO NUMBER(5);

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
    RETURN P_RETORNO;


EXCEPTION
    WHEN OTHERS THEN
    ROLLBACK;
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
COMMIT;
RETURN P_RETORNO;
END;


-- Chamada da função

DECLARE
    P_RETORNO NUMBER;
BEGIN
    P_RETORNO := FUNC_AUMENTASALARIO(100,10);
    DBMS_OUTPUT.PUT_LINE('RESULTADO DA ATUALIZAÇÃO DO SALÁRIO: ' || P_RETORNO);
END;

-----------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------
--------    NOVO PROGRAMA       ---------------------------------------------------------
-----------------------------------------------------------------------------------------

-- Formatos
-- 1a FORMA: (51) 5123-4667
-- 2a FORMA: +011 1343-52

CREATE OR REPLACE
FUNCTION FUNC_FORMATPHONE (P_PHONE IN VARCHAR2)96
RETURN VARCHAR2

IS
    V_PHONEFORMATADO VARCHAR2(21);
BEGIN
    IF LENGTH(P_PHONE) = 12 THEN
        V_PHONEFORMATADO := '('  || SUBSTR(P_PHONE, 1, 2) || ')'
                            || '' || SUBSTR(P_PHONE, 3,1)
                            || '' || SUBSTR(P_PHONE, 5,3)
                            || '-' || SUBSTR(P_PHONE, 9,4);
    ELSIF LENGTH = 18 THEN
        V_PHONEFORMATADO := '+' || SUBSTR(P_PHONE, 1,3)
                            || ' ('  || SUBSTR(P_PHONE, 5, 2) || ')'
                            || '' || SUBSTR(P_PHONE, 8,4)
                            || '-' || SUBSTR(P_PHONE, 13,6);
    ELSE
        V_PHONEFORMATADO := 'NÃO FORMATADO';
    END IF;
RETURN V_PHONEFORMATADO;
END;

SELECT PHONE_NUMBER, FUNC_FORMATPHONE(PHONE_NUMBER)
FROM FUNCIONARIOS;