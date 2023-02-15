-- Adicionando a tratativa de exception others para o código da semana passada

----------------------------------------------------------
-- procedure para projetar salário com novo percentual

CREATE OR REPLACE
PROCEDURE PROC_PROJETAAUMSALARIO (  P_ID IN HR.EMPLOYEES.EMPLOYEE_ID%TYPE,
                                    P_PERCENTUAL IN NUMBER,
                                    P_SALARIO OUT HR.EMPLOYEES.SALARY%TYPE)
IS
    V_QTDE NUMBER(1);

BEGIN
    IF P_PERCENTUAL > 0 AND P_PERCENTUAL < 15 THEN
        SELECT COUNT (*) INTO V_QTDE FROM HR.EMPLOYEES WHERE EMPLOYEE_ID = P_ID;
        IF V_QTDE = 1 THEN
            SELECT SALARY INTO P_SALARIO FROM HR.EMPLOYEES WHERE EMPLOYEE_ID = P_ID;
            P_SALARIO := P_SALARIO + (P_SALARIO * (P_PERCENTUAL/100));
        ELSE
            P_SALARIO := -998;
        END IF;
        ELSE
        P_SALARIO := -999;
    END IF;
    EXCEPTION
    WHEN OTHERS THEN
    P_SALARIO := SLQCODE;
END;

----------------------------------------------------------
-- procedure para retornar salário atual

CREATE OR REPLACE
PROCEDURE PROC_RETORNASALARIOATUAL (P_ID IN HR.EMPLOYEES.EMPLOYEE_ID%TYPE,
                                    P_SALARIO OUT HR.EMPLOYEES.SALARY%TYPE)
IS
    V_QTDE NUMBER(1);

BEGIN

    SELECT COUNT (*) INTO V_QTDE FROM HR.EMPLOYEES WHERE EMPLOYEE_ID = P_ID;
    IF V_QTDE = 1 THEN
        SELECT SALARY INTO P_SALARIO FROM HR.EMPLOYEES WHERE EMPLOYEE_ID = P_ID;
    ELSE
        P_SALARIO := -999;
    END IF;
END;

----------------------------------------------------------
-- compila

    DECLARE
    V_SALARY HR.EMPLOYEES.SALARY%TYPE;

    BEGIN
    PROC_PROJETAAUMSALARIO (107,12, V_SALARY);
    -- PROC_RETORNASALARIOATUAL(107, V_SALARY);

    IF V_SALARY = -998 THEN
        DBMS_OUTPUT.PUT_LINE('O FUNCIONÁRIO NÃO FOI LOCALIZADO');
    ELSIF V_SALARY = -999 THEN
        DBMS_OUTPUT.PUT_LINE('O VALOR PERCENTUAL NÃO É VÁLIDO');

        -- ALTERADO AULA 06/09/2022
        -- INICIO
        ELSIF V_SALARY > 0 THEN 
        DBMS_OUTPUT.PUT_LINE('EXECUTOU COM SUCESSO');
        DBMS_OUTPUT.PUT_LINE('NOVO SALÁRIO DO FUNCIONÁRIO É: R$' || V_SALARY);

        ELSE
        DBMS_OUTPUT.PUT_LINE('ERRO DO EXCEPTION');
        DBMS_OUTPUT.PUT_LINE('CÓDIGO ERRO DO SQLCODE: ' || V_SALARY );

        -- FIM
    END IF;
    END;




-- simulando exception
CREATE OR REPLACE
PROCEDURE PROC_PROJETAAUMSALARIO (  P_ID IN HR.EMPLOYEES.EMPLOYEE_ID%TYPE,
                                    P_PERCENTUAL IN NUMBER,
                                    P_SALARIO OUT HR.EMPLOYEES.SALARY%TYPE)
IS
    V_QTDE NUMBER(1);
    V_ERRO NUMBER(6); -- ADD
    V_DESCERRO VARCHAR2(500); -- ADD

BEGIN
    IF P_PERCENTUAL > 0 AND P_PERCENTUAL < 15 THEN
        SELECT COUNT (*) INTO V_QTDE FROM HR.EMPLOYEES WHERE EMPLOYEE_ID = P_ID;
        IF V_QTDE = 1 THEN
            SELECT SALARY INTO P_SALARIO FROM HR.EMPLOYEES WHERE EMPLOYEE_ID = P_ID;
            P_SALARIO := P_SALARIO + (P_SALARIO * (P_PERCENTUAL/0));
        ELSE
            P_SALARIO := -998;
        END IF;
        ELSE
        P_SALARIO := -999;
    END IF;
-- ALTERADO AULA 06/09/2022
-- INICIO
    EXCEPTION
    WHEN OTHERS THEN
    P_SALARIO := SQLCODE;
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
-- FIM
END;



-- TABELA PARA CRIAR EXCEPTIONS DE PROCEDURE
CREATE TABLE LOG_ERROEXECUCAO(
    ID_LOG NUMBER PRIMARY KEY,
    NOMEPROG VARCHAR2(30) NOT NULL,
    PARAMENTRADA VARCHAR2(120) NULL,
    CODERRO NUMBER(6) NOT NULL,
    DESCERRO VARCHAR2(500) NOT NULL,
    LINHAERRO VARCHAR2(500) NOT NULL,
    USUARIO VARCHAR2(30) NOT NULL,
    DATAHORA DATE NOT NULL,
    STATUS CHAR(1) NOT NULL, -- E-ERRO / R-RESOLVIDO
    DESCSOLUCAO VARCHAR2(500) NULL
);

CREATE SEQUENCE SEQ_ERROEXEC_LOGID
NOCACHE
NOCYCLE;

SELECT * FROM LOG_ERROEXECUCAO;

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
'',
'',
SQLCODE,
SQLERRM,
DBMS_UTILITY.FORMAT_ERROR_BACKTRACE(),
USER,
SYSDATE,
'E',
NULL
);