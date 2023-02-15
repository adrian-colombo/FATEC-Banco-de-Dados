-- Exemplo 1:
---------------------------------------------------------------------------
DECLARE
  X NUMBER(2);
  
BEGIN
  X:=12;
  dbms_output.put_line('O valor de X:' || X);

END;


-- Exemplo 2:
-- Retorna o nome de uma pessoa cadastrada na tabela EMPLOYEES
---------------------------------------------------------------------------
DECLARE
  V_ID NUMBER(3);
  V_NOME VARCHAR(20);
  
BEGIN
  V_ID := 108 ;
  
  SELECT FIRST_NAME INTO V_NOME FROM HR.EMPLOYEES WHERE EMPLOYEE_ID = V_ID;
  
  DBMS_OUTPUT.PUT_LINE('O NOME DO FUNCIONARIO DE ID: ' || V_ID);
  DBMS_OUTPUT.PUT_LINE('É: ' || V_NOME);
  
  EXCEPTION
  WHEN OTHERS THEN
    DBMS_OUTPUT.PUT_LINE('OCORREU UM ERRO');
    DBMS_OUTPUT.PUT_LINE('CÓDIGO DO ERRO: ' || SQLCODE);
    DBMS_OUTPUT.PUT_LINE('DESCRIÇÃO DO ERRO: ' || SQLCODE);
END;


-- Exemplo 3:
-- Retorna o dinheiro de uma pessoa cadastrada na tabela EMPLOYEES
---------------------------------------------------------------------------
DECLARE
  V_ID NUMBER(3);
  V_SALARIO EMPLOYEES.SALARY%TYPE;
  
BEGIN
  V_ID := 107;
  
  SELECT SALARY INTO V_SALARIO FROM HR.EMPLOYEES WHERE EMPLOYEE_ID = V_ID;
  
  DBMS_OUTPUT.PUT_LINE('O NOME DO FUNCIONARIO DE ID: ' || V_ID);
  DBMS_OUTPUT.PUT_LINE('É: ' || V_SALARIO);
  
  EXCEPTION
  WHEN OTHERS THEN
    DBMS_OUTPUT.PUT_LINE('OCORREU UM ERRO');
    DBMS_OUTPUT.PUT_LINE('CÓDIGO DO ERRO: ' || SQLCODE);
    DBMS_OUTPUT.PUT_LINE('DESCRIÇÃO DO ERRO: ' || SQLCODE);
END;


-- Exemplo 4:
-- Retorna o dinheiro e nome
---------------------------------------------------------------------------
DECLARE
  V_ID NUMBER(3);
  V_NOME EMPLOYEES.FIRST_NAME%TYPE;
  V_SALARIO EMPLOYEES.SALARY%TYPE;
  
BEGIN
  V_ID := 109;
  
  SELECT  SALARY, FIRST_NAME
  INTO    V_SALARIO, V_NOME
  FROM    HR.EMPLOYEES WHERE EMPLOYEE_ID = V_ID;
  
  DBMS_OUTPUT.PUT_LINE('ID DO FUNCIONÁRIO: ' || V_ID);
  DBMS_OUTPUT.PUT_LINE('NOME: ' || V_NOME);
  DBMS_OUTPUT.PUT_LINE('SALÁRIO: ' || V_SALARIO);
  
  EXCEPTION
  WHEN OTHERS THEN
    DBMS_OUTPUT.PUT_LINE('OCORREU UM ERRO');
    DBMS_OUTPUT.PUT_LINE('CÓDIGO DO ERRO: ' || SQLCODE);
    DBMS_OUTPUT.PUT_LINE('DESCRIÇÃO DO ERRO: ' || SQLCODE);
END;


-- Exemplo 5:
-- Retorna erro se o funcionário não existir
---------------------------------------------------------------------------

DECLARE
  V_ID NUMBER(4);
  V_NOME EMPLOYEES.FIRST_NAME%TYPE;
  V_SALARIO EMPLOYEES.SALARY%TYPE;
  V_QTDE NUMBER(1);
  
BEGIN
  V_ID := 1090;
  
  SELECT COUNT(*) INTO V_QTDE FROM HR.EMPLOYEES WHERE EMPLOYEE_ID = V_ID;
  
  IF V_QTDE = 1 THEN
  SELECT  SALARY, FIRST_NAME
  INTO    V_SALARIO, V_NOME
  FROM    HR.EMPLOYEES WHERE EMPLOYEE_ID = V_ID;
  
  DBMS_OUTPUT.PUT_LINE('ID DO FUNCIONÁRIO: ' || V_ID);
  DBMS_OUTPUT.PUT_LINE('NOME: ' || V_NOME);
  DBMS_OUTPUT.PUT_LINE('SALÁRIO: ' || V_SALARIO);
  ELSE
    DBMS_OUTPUT.PUT_LINE('Funcionário não encontrado');
  END IF;
  
  EXCEPTION
  WHEN OTHERS THEN
    DBMS_OUTPUT.PUT_LINE('OCORREU UM ERRO');
    DBMS_OUTPUT.PUT_LINE('CÓDIGO DO ERRO: ' || SQLCODE);
    DBMS_OUTPUT.PUT_LINE('DESCRIÇÃO DO ERRO: ' || SQLCODE);
END;


-- Exercicio 1:
-- Fazer um bloco de programação que contenha uma variável p/o id do departamento que deve receber o id 60
-- para testar inicialmente. Verificar se existe o departamento, se existir mostrar o nome do departamento e 
-- o código do manager id. Se não existir, mostrar uma mensagem indicando que o departamento não existe.

-- Testar trocando o ID 60, para 90, para 88 e para null
-----------------------------------------------------------------------------------------'
DECLARE
V_ID NUMBER(4);
V_QTDE NUMBER(1);
V_NOME DEPARTMENTS.DEPARTMENT_NAME%TYPE;
V_CODIGO DEPARTMENTS.MANAGER_ID%TYPE;

BEGIN
  V_ID := 60;
  
  SELECT COUNT(*) INTO V_QTDE FROM HR.DEPARTMENTS WHERE department_id = V_ID;
  
  IF V_QTDE = 1 THEN
  SELECT department_name, manager_id
  INTO   V_NOME, V_CODIGO
  FROM HR.DEPARTMENTS WHERE DEPARTMENT_ID = V_ID;
  DBMS_OUTPUT.PUT_LINE('NOME: ' || V_NOME);
  DBMS_OUTPUT.PUT_LINE('CÓDIGO: ' || V_CODIGO);
  ELSE
      DBMS_OUTPUT.PUT_LINE('Departamento não encontrado');
  END IF;
  
  EXCEPTION
  WHEN OTHERS THEN
    DBMS_OUTPUT.PUT_LINE('OCORREU UM ERRO');
END;