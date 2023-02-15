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
    NOME VARCHAR2(120) NOT NULL
);

CREATE TABLE ASSUNTO (
    ID_ASSUNTO NUMBER(5) PRIMARY KEY,
    NOME VARCHAR2(120) NOT NULL
);

CREATE TABLE FAIXA_IDADE (
    ID_FAIXA NUMBER(5) PRIMARY KEY,
    NOME VARCHAR2(120) NOT NULL
);

CREATE TABLE LIVRARIA (
    ID_LIVRARIA NUMBER(5) PRIMARY KEY,
    NOME VARCHAR2(120) NOT NULL
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

CONSTRAINT CK_GENERO CHECK (GENERO IN ('M', 'F')),
CONSTRAINT PK_VENDA PRIMARY KEY (ID_LIVRARIA, ID_LOCAL, ID_TEMPO, ID_AUTOR, ID_EDITORA, ID_ASSUNTO, ID_FAIXA),
CONSTRAINT FK_VENDA_LIVRARIA FOREIGN KEY (ID_LIVRARIA) REFERENCES LIVRARIA(ID_LIVRARIA),
CONSTRAINT FK_VENDA_LOCAL FOREIGN KEY (ID_LOCAL) REFERENCES LOCAL(ID_LOCAL),
CONSTRAINT FK_VENDA_TEMPO FOREIGN KEY (ID_TEMPO) REFERENCES TEMPO(ID_TEMPO),
CONSTRAINT FK_VENDA_AUTOR FOREIGN KEY (ID_AUTOR) REFERENCES AUTOR(ID_AUTOR),
CONSTRAINT FK_VENDA_EDITORA FOREIGN KEY (ID_EDITORA) REFERENCES EDITORA(ID_EDITORA),
CONSTRAINT FK_VENDA_ASUNTO FOREIGN KEY (ID_ASSUNTO) REFERENCES ASSUNTO(ID_ASSUNTO),
CONSTRAINT FK_VENDA_FAIXA FOREIGN KEY (ID_FAIXA) REFERENCES FAIXA_IDADE(ID_FAIXA),
);

-- Populando as taelas
INSERT INTO TEMPO (ID_TEMPO, MES, ANO) VALUES (1,01,2023);
INSERT INTO TEMPO (ID_TEMPO, MES, ANO) VALUES (2,02,2023);
INSERT INTO TEMPO (ID_TEMPO, MES, ANO) VALUES (3,03,2023);
INSERT INTO TEMPO (ID_TEMPO, MES, ANO) VALUES (4,04,2023);
INSERT INTO TEMPO (ID_TEMPO, MES, ANO) VALUES (5,05,2023);
INSERT INTO TEMPO (ID_TEMPO, MES, ANO) VALUES (6,06,2023);
INSERT INTO TEMPO (ID_TEMPO, MES, ANO) VALUES (7,07,2023);
INSERT INTO TEMPO (ID_TEMPO, MES, ANO) VALUES (8,08,2023);
INSERT INTO TEMPO (ID_TEMPO, MES, ANO) VALUES (9,09,2023);
INSERT INTO TEMPO (ID_TEMPO, MES, ANO) VALUES (10,10,2023);
INSERT INTO TEMPO (ID_TEMPO, MES, ANO) VALUES (11,11,2023);
INSERT INTO TEMPO (ID_TEMPO, MES, ANO) VALUES (12,12,2023);

INSERT INTO AUTOR () VALUES ();
