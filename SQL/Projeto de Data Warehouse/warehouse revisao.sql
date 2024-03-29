drop table venda; 
drop table tempo;
drop table autor;
drop table editora;
drop table assunto;
drop table faixa_idade;
drop table livraria;
drop table local;

CREATE TABLE TEMPO (
    ID_TEMPO NUMBER(5) PRIMARY KEY,
    MES NUMERIC(2) NOT NULL,
    ANO NUMERIC(4) NOT NULL
);

CREATE TABLE AUTOR (
    ID_AUTOR NUMBER(5) PRIMARY KEY,
    NOME VARCHAR2(120) NOT NULL  
);

CREATE TABLE EDITORA (
    ID_EDITORA NUMBER(5) PRIMARY KEY,
    NOME VARCHAR2(80) NOT NULL
);

CREATE TABLE ASSUNTO (
    ID_ASSUNTO NUMBER(5) PRIMARY KEY,
    NOME VARCHAR2(40) NOT NULL
);

CREATE TABLE FAIXA_IDADE (
    ID_FAIXA NUMBER(2) PRIMARY KEY,
    NOME VARCHAR2(60) NOT NULL
);

CREATE TABLE LIVRARIA (
    ID_LIVRARIA NUMBER(5) PRIMARY KEY,
    NOME VARCHAR2(80) NOT NULL
);

CREATE TABLE LOCAL (
    ID_LOCAL NUMBER(5) PRIMARY KEY,
    CIDADE VARCHAR2(120) NOT NULL,
    ESTADO CHAR(2) NOT NULL,
    PAIS VARCHAR2(60) NOT NULL
);

CREATE TABLE VENDA (
 ID_LIVRARIA NUMBER(5) NOT NULL,
 ID_LOCAL NUMBER(5) NOT NULL,
 ID_TEMPO NUMBER(5) NOT NULL,
 ID_AUTOR NUMBER(5) NOT NULL,
 ID_EDITORA NUMBER(5) NOT NULL,
 ID_ASSUNTO NUMBER(5) NOT NULL,
 ID_FAIXA NUMBER(5) NOT NULL,
 GENERO CHAR(1) NOT NULL,
 QUANTIDADE NUMBER(3) NOT NULL,
 VALOR NUMERIC(7,2) NOT NULL,

CONSTRAINT CK_GENERO CHECK (GENERO IN ('M','F')),
CONSTRAINT PK_VENDA PRIMARY KEY (ID_LIVRARIA,ID_LOCAL,ID_TEMPO,ID_AUTOR,ID_EDITORA,ID_ASSUNTO,ID_FAIXA),
CONSTRAINT FK_VENDA_LIVRARIA FOREIGN KEY (ID_LIVRARIA) REFERENCES LIVRARIA(ID_LIVRARIA),
CONSTRAINT FK_VENDA_LOCAL FOREIGN KEY (ID_LOCAL) REFERENCES LOCAL(ID_LOCAL),
CONSTRAINT FK_VENDA_TEMPO FOREIGN KEY (ID_TEMPO) REFERENCES TEMPO(ID_TEMPO),
CONSTRAINT FK_VENDA_AUTOR FOREIGN KEY (ID_AUTOR) REFERENCES AUTOR(ID_AUTOR),
CONSTRAINT FK_VENDA_EDITORA FOREIGN KEY (ID_EDITORA) REFERENCES EDITORA(ID_EDITORA),
CONSTRAINT FK_VENDA_ASUNTO FOREIGN KEY (ID_ASSUNTO) REFERENCES ASSUNTO(ID_ASSUNTO),
CONSTRAINT FK_VENDA_FAIXA FOREIGN KEY (ID_FAIXA) REFERENCES FAIXA_IDADE(ID_FAIXA)
);

-- Criando os intervalos
CREATE SEQUENCE SEQ_IDTEMPO NOCACHE NOCYCLE;
CREATE SEQUENCE SEQ_IDAUTOR NOCACHE NOCYCLE;
CREATE SEQUENCE SEQ_IDEDITORA NOCACHE NOCYCLE;
CREATE SEQUENCE SEQ_IDASSUNTO NOCACHE NOCYCLE;
CREATE SEQUENCE SEQ_IDLIVRARIA NOCACHE NOCYCLE;
CREATE SEQUENCE SEQ_IDLOCAL NOCACHE NOCYCLE;



-- Populando as tabelas
INSERT INTO TEMPO (ID_TEMPO,MES,ANO) VALUES (SEQ_IDTEMPO.NEXTVAL,01,2023);
INSERT INTO TEMPO (ID_TEMPO,MES,ANO) VALUES (SEQ_IDTEMPO.NEXTVAL,02,2023);
INSERT INTO TEMPO (ID_TEMPO,MES,ANO) VALUES (SEQ_IDTEMPO.NEXTVAL,03,2023);
INSERT INTO TEMPO (ID_TEMPO,MES,ANO) VALUES (SEQ_IDTEMPO.NEXTVAL,04,2023);
INSERT INTO TEMPO (ID_TEMPO,MES,ANO) VALUES (SEQ_IDTEMPO.NEXTVAL,05,2023);
INSERT INTO TEMPO (ID_TEMPO,MES,ANO) VALUES (SEQ_IDTEMPO.NEXTVAL,06,2023);
INSERT INTO TEMPO (ID_TEMPO,MES,ANO) VALUES (SEQ_IDTEMPO.NEXTVAL,07,2023);
INSERT INTO TEMPO (ID_TEMPO,MES,ANO) VALUES (SEQ_IDTEMPO.NEXTVAL,08,2023);
INSERT INTO TEMPO (ID_TEMPO,MES,ANO) VALUES (SEQ_IDTEMPO.NEXTVAL,09,2023);
INSERT INTO TEMPO (ID_TEMPO,MES,ANO) VALUES (SEQ_IDTEMPO.NEXTVAL,10,2023);
INSERT INTO TEMPO (ID_TEMPO,MES,ANO) VALUES (SEQ_IDTEMPO.NEXTVAL,11,2023);
INSERT INTO TEMPO (ID_TEMPO,MES,ANO) VALUES (SEQ_IDTEMPO.NEXTVAL,12,2023);

INSERT INTO AUTOR (ID_AUTOR,NOME) VALUES (SEQ_IDAUTOR.NEXTVAL,'Friedrich Nietzsche');
INSERT INTO AUTOR (ID_AUTOR,NOME) VALUES (SEQ_IDAUTOR.NEXTVAL,'Charles Chaplin');
INSERT INTO AUTOR (ID_AUTOR,NOME) VALUES (SEQ_IDAUTOR.NEXTVAL,'Rui Barbosa');
INSERT INTO AUTOR (ID_AUTOR,NOME) VALUES (SEQ_IDAUTOR.NEXTVAL,'J.K. Rowling');
INSERT INTO AUTOR (ID_AUTOR,NOME) VALUES (SEQ_IDAUTOR.NEXTVAL,'Stephen King');

INSERT INTO EDITORA (ID_EDITORA,NOME) VALUES (SEQ_IDEDITORA.NEXTVAL,'Pearson');
INSERT INTO EDITORA (ID_EDITORA,NOME) VALUES (SEQ_IDEDITORA.NEXTVAL,'Rocco');
INSERT INTO EDITORA (ID_EDITORA,NOME) VALUES (SEQ_IDEDITORA.NEXTVAL,'Moderna');

INSERT INTO ASSUNTO (ID_ASSUNTO,NOME) VALUES (SEQ_IDASSUNTO.NEXTVAL,'Filosofia');
INSERT INTO ASSUNTO (ID_ASSUNTO,NOME) VALUES (SEQ_IDASSUNTO.NEXTVAL,'Teatro');
INSERT INTO ASSUNTO (ID_ASSUNTO,NOME) VALUES (SEQ_IDASSUNTO.NEXTVAL,'Ficção Cientifica');
INSERT INTO ASSUNTO (ID_ASSUNTO,NOME) VALUES (SEQ_IDASSUNTO.NEXTVAL,'Horror');
INSERT INTO ASSUNTO (ID_ASSUNTO,NOME) VALUES (SEQ_IDASSUNTO.NEXTVAL,'Terror');
INSERT INTO ASSUNTO (ID_ASSUNTO,NOME) VALUES (SEQ_IDASSUNTO.NEXTVAL,'Artigos');
INSERT INTO ASSUNTO (ID_ASSUNTO,NOME) VALUES (SEQ_IDASSUNTO.NEXTVAL,'Poesias');

INSERT INTO FAIXA_IDADE (ID_FAIXA,NOME) VALUES (0,'Livre');
INSERT INTO FAIXA_IDADE (ID_FAIXA,NOME) VALUES (10,'Não recomendado para menores de 10 anos');
INSERT INTO FAIXA_IDADE (ID_FAIXA,NOME) VALUES (12,'Não recomendado para menores de 12 anos');
INSERT INTO FAIXA_IDADE (ID_FAIXA,NOME) VALUES (14,'Não recomendado para menores de 14 anos');
INSERT INTO FAIXA_IDADE (ID_FAIXA,NOME) VALUES (16,'Não recomendado para menores de 16 anos');
INSERT INTO FAIXA_IDADE (ID_FAIXA,NOME) VALUES (18,'Não recomendado para menores de 18 anos');

INSERT INTO LIVRARIA (ID_LIVRARIA,NOME) VALUES (SEQ_IDLIVRARIA.NEXTVAL,'Jalovi Livraria');
INSERT INTO LIVRARIA (ID_LIVRARIA,NOME) VALUES (SEQ_IDLIVRARIA.NEXTVAL,'JCD COM');
INSERT INTO LIVRARIA (ID_LIVRARIA,NOME) VALUES (SEQ_IDLIVRARIA.NEXTVAL,'Via Livro');
INSERT INTO LIVRARIA (ID_LIVRARIA,NOME) VALUES (SEQ_IDLIVRARIA.NEXTVAL,'Zaccara');
INSERT INTO LIVRARIA (ID_LIVRARIA,NOME) VALUES (SEQ_IDLIVRARIA.NEXTVAL,'Livraria Cultura do Conjunto Nacional');
INSERT INTO LIVRARIA (ID_LIVRARIA,NOME) VALUES (SEQ_IDLIVRARIA.NEXTVAL,'Livraria Francesa');

INSERT INTO LOCAL (ID_LOCAL,CIDADE,ESTADO,PAIS) VALUES (SEQ_IDLOCAL.NEXTVAL,'Bauru','SP','Brasil');
INSERT INTO LOCAL (ID_LOCAL,CIDADE,ESTADO,PAIS) VALUES (SEQ_IDLOCAL.NEXTVAL,'São Paulo','SP','Brasil');
INSERT INTO LOCAL (ID_LOCAL,CIDADE,ESTADO,PAIS) VALUES (SEQ_IDLOCAL.NEXTVAL,'Marília','SP','Brasil');
INSERT INTO LOCAL (ID_LOCAL,CIDADE,ESTADO,PAIS) VALUES (SEQ_IDLOCAL.NEXTVAL,'Bagé','RS','Brasil');

INSERT INTO VENDA (ID_LIVRARIA,ID_LOCAL,ID_TEMPO,ID_AUTOR,ID_EDITORA,ID_ASSUNTO,ID_FAIXA,GENERO,QUANTIDADE,VALOR)
    VALUES (1,1,1,1,1,1,14,'M',100,22.00);
INSERT INTO VENDA (ID_LIVRARIA,ID_LOCAL,ID_TEMPO,ID_AUTOR,ID_EDITORA,ID_ASSUNTO,ID_FAIXA,GENERO,QUANTIDADE,VALOR)
    VALUES (1,1,1,1,1,1,10,'M',100,28.00);

INSERT INTO VENDA (ID_LIVRARIA,ID_LOCAL,ID_TEMPO,ID_AUTOR,ID_EDITORA,ID_ASSUNTO,ID_FAIXA,GENERO,QUANTIDADE,VALOR)
    VALUES (1,2,1,1,1,1,14,'M',100,10.50);
INSERT INTO VENDA (ID_LIVRARIA,ID_LOCAL,ID_TEMPO,ID_AUTOR,ID_EDITORA,ID_ASSUNTO,ID_FAIXA,GENERO,QUANTIDADE,VALOR)
    VALUES (1,2,1,1,1,1,10,'M',100,5.00);

INSERT INTO VENDA (ID_LIVRARIA,ID_LOCAL,ID_TEMPO,ID_AUTOR,ID_EDITORA,ID_ASSUNTO,ID_FAIXA,GENERO,QUANTIDADE,VALOR)
    VALUES (1,3,1,1,1,1,14,'M',100,10.00);
INSERT INTO VENDA (ID_LIVRARIA,ID_LOCAL,ID_TEMPO,ID_AUTOR,ID_EDITORA,ID_ASSUNTO,ID_FAIXA,GENERO,QUANTIDADE,VALOR)
    VALUES (1,3,1,1,1,1,10,'M',100,10.00);
INSERT INTO VENDA (ID_LIVRARIA,ID_LOCAL,ID_TEMPO,ID_AUTOR,ID_EDITORA,ID_ASSUNTO,ID_FAIXA,GENERO,QUANTIDADE,VALOR)
    VALUES (1,3,1,1,1,1,0,'M',100,15.00);

INSERT INTO VENDA (ID_LIVRARIA,ID_LOCAL,ID_TEMPO,ID_AUTOR,ID_EDITORA,ID_ASSUNTO,ID_FAIXA,GENERO,QUANTIDADE,VALOR)
    VALUES (2,3,1,1,1,1,0,'M',100,15.00);




 SELECT LIVRARIA.NOME"Livraria", ASSUNTO.NOME"Assunto", LOCAL.CIDADE"Cidade",LOCAL.ESTADO"UF", LOCAL.PAIS"País",SUM(VENDA.VALOR) AS VALOR_TOTAL
    FROM VENDA
    INNER JOIN LIVRARIA ON VENDA.ID_LIVRARIA = LIVRARIA.ID_LIVRARIA
    INNER JOIN LOCAL ON VENDA.ID_LOCAL = LOCAL.ID_LOCAL
    INNER JOIN ASSUNTO ON VENDA.ID_ASSUNTO = ASSUNTO.ID_ASSUNTO
    GROUP BY LIVRARIA.NOME, ASSUNTO.NOME, LOCAL.CIDADE, LOCAL.ESTADO, LOCAL.PAIS
    ORDER BY ASSUNTO.NOME, LIVRARIA.NOME;
