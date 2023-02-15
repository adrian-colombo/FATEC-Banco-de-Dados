-- Exercício 1
-- Criar uma procedure que receba um código de pessoa como parâmetro de entrada e através de um parâmetro de saída retorne o nome da pessoa. Caso, o código seja inexistente, retorne: Pessoa não encontrada.
 
-- Script para criar a tabela e inserir dados para testes: 
CREATE TABLE PESSOA(
   ID NUMBER(4) PRIMARY KEY, 
   NOME VARCHAR2(120) NOT NULL,
   CONSTRAINT UQ_NOME_PESSOA UNIQUE (NOME)
);
INSERT INTO PESSOA (ID, NOME) VALUES (1, 'João Silva');
INSERT INTO PESSOA (ID, NOME) VALUES (2, 'Maria Silva');
INSERT INTO PESSOA (ID, NOME) VALUES (3, 'Claudia Souza');
INSERT INTO PESSOA (ID, NOME) VALUES (4, 'Jurema Paschoal');
INSERT INTO PESSOA (ID, NOME) VALUES (5, 'André Paulo');
COMMIT;

-- Resolução do primeiro exercicio:
CREATE OR REPLACE
PROCEDURE PROC_RETORNA_NOME (   P_ID IN PESSOA.ID%TYPE,
                                P_NOME OUT PESSOA.NOME%TYPE)

IS 
    V_QTDE NUMBER(1);

BEGIN

SELECT COUNT(*) INTO V_QTDE FROM PESSOA WHERE ID = P_ID;
    IF V_QTDE = 1 THEN
    SELECT NOME INTO P_NOME FROM PESSOA WHERE ID = P_ID;

    ELSE
    P_NOME := 'Pessoa não encontrada.';
    END IF;

EXCEPTION
WHEN OTHERS THEN
    P_NOME := 'Erro Código: ' || SQLCODE;
 END;

-- Compila
DECLARE
    P_NOME PESSOA.NOME%TYPE;
BEGIN
    PROC_RETORNA_NOME(1, P_NOME);
    DBMS_OUTPUT.PUT_LINE('Nome da pessoa: ' || P_NOME);
END;

-- Quatro casos de teste devem ser exercitados na execução da procedure criada.
 
-- - Primeiramente, teste com o valor 4 para o parâmetro de entrada, que deve ter 
-- o retorno Jurema Paschoal.
-- - Posteriormente, faça o teste com o valor 9 para o parâmetro de entrada, que 
-- deve ter o retorno Pessoa não encontrada.
-- - Continue os testes com o valor NULL para o parâmetro de entrada, que deve 
-- ter o retorno Pessoa não encontrada.
-- - Por fim, teste com o valor -15 para o parâmetro de entrada, que deve ter 
-- o retorno Pessoa não encontrada.


 
-- --------------------------------------------------------------------------
 
-- Exercício 2
-- Criar uma função que receba como parâmetro de entrada o código do produto 
-- e o número que representa o percentual de aumento do produto em questão.
 
-- O script abaixo representa a tabela de PRODUTO e os registros que devem 
-- ser inseridos:
 
CREATE TABLE PRODUTO( 
   ID NUMBER(4) PRIMARY KEY, 
   NOME VARCHAR2(120) NOT NULL, 
   PRECO NUMBER(6,2) NOT NULL,
   CONSTRAINT UQ_NOME_PRODUTO UNIQUE (NOME) 
); 
INSERT INTO PRODUTO (ID, NOME, PRECO) VALUES (1, 'Caneta', 2.50); 
INSERT INTO PRODUTO (ID, NOME, PRECO) VALUES (2, 'Papel', 12.30); 
INSERT INTO PRODUTO (ID, NOME, PRECO) VALUES (3, 'Borracha', 0.45); 
INSERT INTO PRODUTO (ID, NOME, PRECO) VALUES (4, 'Lápis', 1.50); 
INSERT INTO PRODUTO (ID, NOME, PRECO) VALUES (5, 'Pincel', 6); 
COMMIT;


-- Resolução:
CREATE OR REPLACE
FUNCTION FUNC_AUMENTAVALORPRODUTO (    P_ID IN PRODUTO.ID%TYPE,
                                        P_PERCENTUAL IN NUMBER)
RETURN NUMBER
IS 
    V_QTDE NUMBER(1);
    V_RETORNO NUMBER(5);
    V_PRECO PRODUTO.PRECO%TYPE;

BEGIN

SELECT COUNT(*) INTO V_QTDE FROM PRODUTO WHERE ID = P_ID;
    IF V_QTDE = 1 THEN
        IF P_PERCENTUAL > 0 AND P_PERCENTUAL <= 15 THEN
            SELECT PRECO INTO V_PRECO FROM PRODUTO WHERE ID = P_ID;
            V_PRECO :=  V_PRECO + (V_PRECO * (P_PERCENTUAL/100));
            UPDATE PRODUTO SET PRECO = V_PRECO WHERE ID = P_ID;
            V_RETORNO := 0;
        ELSE
            V_RETORNO := -998;

            END IF;
    ELSE
        V_RETORNO := -999;
    END IF;

    COMMIT;
    RETURN V_RETORNO;

EXCEPTION
WHEN OTHERS THEN
    ROLLBACK;
    V_RETORNO := SQLCODE;
    RETURN V_RETORNO;
 END;


-- Compila
DECLARE
    V_RETORNO NUMBER;
BEGIN
   V_RETORNO := FUNC_AUMENTAVALORPRODUTO(4,12);
    DBMS_OUTPUT.PUT_LINE('COD: ' || V_RETORNO);
END;


-- Algumas checagens devem ser realizadas:
 
-- - Caso, o código do produto passado não seja encontrado deve retornar 
-- o valor -999, que representará produto não encontrado.
-- - O produto na execução da função, só pode sofrer aumentos de valores 
-- de percentual maiores que zero e menor ou igual a 15. Se essa regra for 
-- infringida, deve retornar o código -998. 
-- - Caso todas as checagem sejam atendidas o produto deve ter seu preço 
-- aumentado no percentual passado (UPDATE) e a função deve retornar o código 0 
-- para indicar que deu certo a execução.
 
-- - Quatro casos de teste devem ser exercitados na execução da função criada.
 
-- - Primeiramente, teste a função passando os seguintes valores para os parâmetros 
-- de entrada, código do produto igual a 4 e percentual igual a 12.
-- - Posteriormente, teste a função passando os seguintes valores para os parâmetros 
-- de entrada, código do produto igual a 3 e percentual igual a 2,32.
-- - Realizar o teste a função passando os seguintes valores para os parâmetros de 
-- entrada, código do produto igual a 2 e percentual igual a 20.
-- - Por fim, teste a função passando os seguintes valores para os parâmetros de 
-- entrada, código do produto igual a 9 e percentual igual a 10.