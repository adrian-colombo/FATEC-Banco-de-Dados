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
        ELSE
        DBMS_OUTPUT.PUT_LINE('NOVO SALÁRIO DO FUNCIONÁRIO É: R$' || V_SALARY);
    END IF;
    END;