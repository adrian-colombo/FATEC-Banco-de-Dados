-- DELETAR AS SEQUÊNCIAS --
DROP SEQUENCE "SEQ_CINEMA";
DROP SEQUENCE "SEQ_LOCAL";
DROP SEQUENCE "SEQ_TEMPO";
DROP SEQUENCE "SEQ_ATOR";
DROP SEQUENCE "SEQ_DIRETOR";
DROP SEQUENCE "SEQ_ASSUNTO";

-- DELETAR AS TABELAS --
DROP TABLE "EXIBICAO";
DROP TABLE "CINEMA";
DROP TABLE "LOCAL";
DROP TABLE "TEMPO";
DROP TABLE "ATOR";
DROP TABLE "DIRETOR";
DROP TABLE "ASSUNTO";

-- TABELA CINEMA --
CREATE TABLE CINEMA(
    ID_CINEMA NUMBER(5) PRIMARY KEY,
    NOME_CINE VARCHAR2(120) NOT NULL
);
-- TABELA LOCAL -- 
CREATE TABLE LOCAL(
    ID_LOCAL NUMBER(5) PRIMARY KEY,
    CIDADE VARCHAR2(120) NOT NULL,
    ESTADO VARCHAR2(120) NOT NULL,
	REGIAO VARCHAR2(120) NOT NULL,
    PAIS VARCHAR2(120) NOT NULL
);
-- TABELA TEMPO --
CREATE TABLE TEMPO(
	ID_TEMPO NUMBER(5) PRIMARY KEY,
    DIAS NUMBER(2) NOT NULL,
	MESES NUMBER(2) NOT NULL,
	ANOS NUMBER(4) NOT NULL
);
-- TABELA ATOR --
CREATE TABLE ATOR(
    ID_ATOR NUMBER(5) PRIMARY KEY,
    NOME_ATOR VARCHAR2(120) NOT NULL
);
-- TABELA DIRETOR --
CREATE TABLE DIRETOR(
    ID_DIRETOR NUMBER(5) PRIMARY KEY,
    NOME_DIR VARCHAR2(120) NOT NULL
);
-- TABELA ASSUNTO --
CREATE TABLE ASSUNTO(
    ID_ASSUNTO NUMBER(5) PRIMARY KEY,
    DESCRICAO VARCHAR2(120) NOT NULL
);
-- TABELA EXIBICAO --
CREATE TABLE EXIBICAO(
    ID_CINEMA NUMBER(5),
    ID_LOCAL NUMBER(5),
	ID_TEMPO NUMBER(5),
    ID_ATOR NUMBER(5),
    ID_DIRETOR NUMBER(5),
    ID_ASSUNTO NUMBER(5),
	QUANTIDADE NUMBER(5) NULL,
    VALOR NUMBER(6,2) NOT NULL,
	CONSTRAINT PK_EXIBICAO PRIMARY KEY (ID_CINEMA, ID_LOCAL, ID_ATOR, ID_DIRETOR, ID_ASSUNTO), 
	CONSTRAINT FK_EXIBICAO_CINEMA FOREIGN KEY (ID_CINEMA)
		REFERENCES CINEMA (ID_CINEMA),
	CONSTRAINT FK_EXIBICAO_LOCAL FOREIGN KEY (ID_LOCAL)
		REFERENCES LOCAL (ID_LOCAL),
	CONSTRAINT FK_EXIBICAO_TEMPO FOREIGN KEY (ID_TEMPO)
		REFERENCES TEMPO (ID_TEMPO),
	CONSTRAINT FK_EXIBICAO_ATOR FOREIGN KEY (ID_ATOR)
		REFERENCES ATOR (ID_ATOR),
	CONSTRAINT FK_EXIBICAO_DIRETOR FOREIGN KEY (ID_DIRETOR)
		REFERENCES DIRETOR (ID_DIRETOR),
	CONSTRAINT FK_EXIBICAO_ASSUNTO FOREIGN KEY (ID_ASSUNTO)
		REFERENCES ASSUNTO (ID_ASSUNTO)
);

-- CRIAÇÃO DAS SEQUÊNCIAS --

CREATE SEQUENCE SEQ_CINEMA
START WITH 1
INCREMENT BY 1
MAXVALUE 99999
NOCYCLE
NOCACHE;

CREATE SEQUENCE SEQ_LOCAL
START WITH 1
INCREMENT BY 1
MAXVALUE 99999
NOCYCLE
NOCACHE;

CREATE SEQUENCE SEQ_TEMPO
START WITH 1
INCREMENT BY 1
MAXVALUE 99999
NOCYCLE
NOCACHE;

CREATE SEQUENCE SEQ_ATOR
START WITH 1
INCREMENT BY 1
MAXVALUE 99999
NOCYCLE
NOCACHE;

CREATE SEQUENCE SEQ_DIRETOR
START WITH 1
INCREMENT BY 1
MAXVALUE 99999
NOCYCLE
NOCACHE;

CREATE SEQUENCE SEQ_ASSUNTO
START WITH 1
INCREMENT BY 1
MAXVALUE 99999
NOCYCLE
NOCACHE;


--- INSERIR DADOS ---

---- INSERINDO DADOS TABELA CINEMA --
INSERT INTO CINEMA
	(ID_CINEMA, NOME_CINE) 
  VALUES (SEQ_CINEMA.NEXTVAL, 'CINE_MANAUS');
INSERT INTO CINEMA
	(ID_CINEMA, NOME_CINE) 
  VALUES (SEQ_CINEMA.NEXTVAL, 'CINE_RIO BRANCO');
INSERT INTO CINEMA
	(ID_CINEMA, NOME_CINE) 
  VALUES (SEQ_CINEMA.NEXTVAL, 'CINE_SALVADOR');
INSERT INTO CINEMA
	(ID_CINEMA, NOME_CINE) 
  VALUES (SEQ_CINEMA.NEXTVAL, 'CINE_FORTALEZA');
INSERT INTO CINEMA
	(ID_CINEMA, NOME_CINE) 
  VALUES (SEQ_CINEMA.NEXTVAL, 'CINE_BRASILIA ');
INSERT INTO CINEMA
	(ID_CINEMA, NOME_CINE) 
  VALUES (SEQ_CINEMA.NEXTVAL, 'CINE_CUIABÁ');
INSERT INTO CINEMA
	(ID_CINEMA, NOME_CINE) 
  VALUES (SEQ_CINEMA.NEXTVAL, 'CINE_SÃO PAULO');
INSERT INTO CINEMA
	(ID_CINEMA, NOME_CINE) 
  VALUES (SEQ_CINEMA.NEXTVAL, 'CINE_BELO HORIZONTE');
INSERT INTO CINEMA
	(ID_CINEMA, NOME_CINE) 
  VALUES (SEQ_CINEMA.NEXTVAL, 'CINE_CURITIBA');
INSERT INTO CINEMA
	(ID_CINEMA, NOME_CINE) 
  VALUES (SEQ_CINEMA.NEXTVAL, 'CINE_FLORIANÓPOLIS');


---- INSERINDO DADOS TABELA LOCAL --
INSERT INTO LOCAL
	(ID_LOCAL, CIDADE, ESTADO, REGIAO, PAIS) 
  VALUES (SEQ_LOCAL.NEXTVAL, 'MANAUS', 'AMAZONAS', 'NORTE', 'BRASIL');
INSERT INTO LOCAL
	(ID_LOCAL, CIDADE, ESTADO, REGIAO, PAIS) 
  VALUES (SEQ_LOCAL.NEXTVAL, 'RIO BRANCO', 'ACRE', 'NORTE', 'BRASIL');
INSERT INTO LOCAL
	(ID_LOCAL, CIDADE, ESTADO, REGIAO, PAIS) 
  VALUES (SEQ_LOCAL.NEXTVAL, 'SALVADOR', 'BAHIA', 'NORDESTE', 'BRASIL');
INSERT INTO LOCAL
	(ID_LOCAL, CIDADE, ESTADO, REGIAO, PAIS) 
  VALUES (SEQ_LOCAL.NEXTVAL, 'FORTALEZA', 'CEARÁ', 'NORDESTE', 'BRASIL');
INSERT INTO LOCAL
	(ID_LOCAL, CIDADE, ESTADO, REGIAO, PAIS) 
  VALUES (SEQ_LOCAL.NEXTVAL, 'BRASÍLIA', 'DISTRITO FEDERAL', 'CENTRO-OESTE', 'BRASIL');
INSERT INTO LOCAL
	(ID_LOCAL, CIDADE, ESTADO, REGIAO, PAIS) 
  VALUES (SEQ_LOCAL.NEXTVAL, 'CUIABÁ', 'MATO GROSSO', 'CENTRO-OESTE', 'BRASIL');
INSERT INTO LOCAL
	(ID_LOCAL, CIDADE, ESTADO, REGIAO, PAIS) 
  VALUES (SEQ_LOCAL.NEXTVAL, 'SÃO PAULO', 'SÃO PAULO', 'SUDESTE', 'BRASIL');
INSERT INTO LOCAL
	(ID_LOCAL, CIDADE, ESTADO, REGIAO, PAIS) 
  VALUES (SEQ_LOCAL.NEXTVAL, 'BELO HORIZONTE', 'MINAS GERAIS', 'SUDESTE', 'BRASIL');
INSERT INTO LOCAL
	(ID_LOCAL, CIDADE, ESTADO, REGIAO, PAIS) 
  VALUES (SEQ_LOCAL.NEXTVAL, 'CURITIBA', 'PARANÁ', 'SUL', 'BRASIL');
INSERT INTO LOCAL
	(ID_LOCAL, CIDADE, ESTADO, REGIAO, PAIS) 
  VALUES (SEQ_LOCAL.NEXTVAL, 'FLORIANÓPOLIS', 'SANTA CATARINA', 'SUL', 'BRASIL');

---- INSERINDO DADOS TABELA TEMPO --
INSERT INTO TEMPO
	(ID_TEMPO, DIAS, MESES, ANOS)
  VALUES (SEQ_TEMPO.NEXTVAL, 01, 01, 1999);
INSERT INTO TEMPO
	(ID_TEMPO, DIAS, MESES, ANOS)
  VALUES (SEQ_TEMPO.NEXTVAL, 02, 02, 2000);
INSERT INTO TEMPO
	(ID_TEMPO, DIAS, MESES, ANOS)
  VALUES (SEQ_TEMPO.NEXTVAL, 03, 03, 2001);
INSERT INTO TEMPO
	(ID_TEMPO, DIAS, MESES, ANOS)
  VALUES (SEQ_TEMPO.NEXTVAL, 04, 04, 2002);
INSERT INTO TEMPO
	(ID_TEMPO, DIAS, MESES, ANOS)
  VALUES (SEQ_TEMPO.NEXTVAL, 05, 05, 2003);
INSERT INTO TEMPO
	(ID_TEMPO, DIAS, MESES, ANOS)
  VALUES (SEQ_TEMPO.NEXTVAL, 06, 06, 2004);
INSERT INTO TEMPO
	(ID_TEMPO, DIAS, MESES, ANOS)
  VALUES (SEQ_TEMPO.NEXTVAL, 07, 07, 2005);
INSERT INTO TEMPO
	(ID_TEMPO, DIAS, MESES, ANOS)
  VALUES (SEQ_TEMPO.NEXTVAL, 08, 08, 2006);
INSERT INTO TEMPO
	(ID_TEMPO, DIAS, MESES, ANOS)
  VALUES (SEQ_TEMPO.NEXTVAL, 09, 09, 2007);
INSERT INTO TEMPO
	(ID_TEMPO, DIAS, MESES, ANOS)
  VALUES (SEQ_TEMPO.NEXTVAL, 10, 10, 2008);
INSERT INTO TEMPO
	(ID_TEMPO, DIAS, MESES, ANOS)
  VALUES (SEQ_TEMPO.NEXTVAL, 11, 11, 2009);
INSERT INTO TEMPO
	(ID_TEMPO, DIAS, MESES, ANOS)
  VALUES (SEQ_TEMPO.NEXTVAL, 12, 12, 2010);
INSERT INTO TEMPO
	(ID_TEMPO, DIAS, MESES, ANOS)
  VALUES (SEQ_TEMPO.NEXTVAL, 13, 10, 1982);  

  
---- INSERINDO DADOS TABELA ATOR --
INSERT INTO ATOR
	(ID_ATOR, NOME_ATOR) 
  VALUES (SEQ_ATOR.NEXTVAL, 'WILL SMITH');
INSERT INTO ATOR
	(ID_ATOR, NOME_ATOR) 
  VALUES (SEQ_ATOR.NEXTVAL, 'SCARLETT JOHANSSON');
INSERT INTO ATOR
	(ID_ATOR, NOME_ATOR) 
  VALUES (SEQ_ATOR.NEXTVAL, 'KEANU REEVES');
INSERT INTO ATOR
	(ID_ATOR, NOME_ATOR) 
  VALUES (SEQ_ATOR.NEXTVAL, 'ROBERT DOWNEY JR.');
INSERT INTO ATOR
	(ID_ATOR, NOME_ATOR) 
  VALUES (SEQ_ATOR.NEXTVAL, 'DANIEL RADCLIFFE');
INSERT INTO ATOR
	(ID_ATOR, NOME_ATOR) 
  VALUES (SEQ_ATOR.NEXTVAL, 'ANGELINA JOLIE');
INSERT INTO ATOR
	(ID_ATOR, NOME_ATOR) 
  VALUES (SEQ_ATOR.NEXTVAL, 'CHRISTIAN BALE');
INSERT INTO ATOR
	(ID_ATOR, NOME_ATOR) 
  VALUES (SEQ_ATOR.NEXTVAL, 'SAMUEL L. JACKSON');
INSERT INTO ATOR
	(ID_ATOR, NOME_ATOR) 
  VALUES (SEQ_ATOR.NEXTVAL, 'LEONARDO DICAPRIO');
INSERT INTO ATOR
	(ID_ATOR, NOME_ATOR) 
  VALUES (SEQ_ATOR.NEXTVAL, 'JENNIFER ANISTON');
INSERT INTO ATOR
	(ID_ATOR, NOME_ATOR) 
  VALUES (SEQ_ATOR.NEXTVAL, 'HUGH JACKMAN');
INSERT INTO ATOR
	(ID_ATOR, NOME_ATOR) 
  VALUES (SEQ_ATOR.NEXTVAL, 'JACKIE CHAN');
INSERT INTO ATOR
	(ID_ATOR, NOME_ATOR) 
  VALUES (SEQ_ATOR.NEXTVAL, 'VIOLA DAVIS');
INSERT INTO ATOR
	(ID_ATOR, NOME_ATOR) 
  VALUES (SEQ_ATOR.NEXTVAL, 'BEN AFFLECK');
  
---- INSERINDO DADOS TABELA DIRETOR --
INSERT INTO DIRETOR
	(ID_DIRETOR, NOME_DIR) 
  VALUES (SEQ_DIRETOR.NEXTVAL, 'GEORGE LUCAS');
INSERT INTO DIRETOR
	(ID_DIRETOR, NOME_DIR) 
  VALUES (SEQ_DIRETOR.NEXTVAL, 'STEVEN SPIELBERG');
INSERT INTO DIRETOR
	(ID_DIRETOR, NOME_DIR) 
  VALUES (SEQ_DIRETOR.NEXTVAL, 'STANLEY KUBRICK');
INSERT INTO DIRETOR
	(ID_DIRETOR, NOME_DIR) 
  VALUES (SEQ_DIRETOR.NEXTVAL, 'BERNARDO BERTOLUCCI');
INSERT INTO DIRETOR
	(ID_DIRETOR, NOME_DIR) 
  VALUES (SEQ_DIRETOR.NEXTVAL, 'JEAN-LUC GODARD');
INSERT INTO DIRETOR
	(ID_DIRETOR, NOME_DIR) 
  VALUES (SEQ_DIRETOR.NEXTVAL, 'QUENTIN TARANTINO');
INSERT INTO DIRETOR
	(ID_DIRETOR, NOME_DIR) 
  VALUES (SEQ_DIRETOR.NEXTVAL, 'MARTIN SCORSESE');
INSERT INTO DIRETOR
	(ID_DIRETOR, NOME_DIR) 
  VALUES (SEQ_DIRETOR.NEXTVAL, 'ALFRED HITCHCOCK');
INSERT INTO DIRETOR
	(ID_DIRETOR, NOME_DIR) 
  VALUES (SEQ_DIRETOR.NEXTVAL, 'TIM BURTON');
INSERT INTO DIRETOR
	(ID_DIRETOR, NOME_DIR) 
  VALUES (SEQ_DIRETOR.NEXTVAL, 'FRANCIS FORD COPPOLA');
INSERT INTO DIRETOR
	(ID_DIRETOR, NOME_DIR) 
  VALUES (SEQ_DIRETOR.NEXTVAL, 'JAMES CAMERON');

---- INSERINDO DADOS TABELA ASSUNTO --
INSERT INTO ASSUNTO
	(ID_ASSUNTO, DESCRICAO) 
  VALUES (SEQ_ASSUNTO.NEXTVAL, 'AÇÃO');
INSERT INTO ASSUNTO
	(ID_ASSUNTO, DESCRICAO) 
  VALUES (SEQ_ASSUNTO.NEXTVAL, 'ANIMAÇÃO');
INSERT INTO ASSUNTO
	(ID_ASSUNTO, DESCRICAO) 
  VALUES (SEQ_ASSUNTO.NEXTVAL, 'AVENTURA'); 
INSERT INTO ASSUNTO
	(ID_ASSUNTO, DESCRICAO) 
  VALUES (SEQ_ASSUNTO.NEXTVAL, 'COMÉDIA');
INSERT INTO ASSUNTO
	(ID_ASSUNTO, DESCRICAO) 
  VALUES (SEQ_ASSUNTO.NEXTVAL, 'COMÉDIA ROMÂNTICA'); 
INSERT INTO ASSUNTO
	(ID_ASSUNTO, DESCRICAO) 
  VALUES (SEQ_ASSUNTO.NEXTVAL, 'DOCUMENTÁRIOS'); 
INSERT INTO ASSUNTO
	(ID_ASSUNTO, DESCRICAO) 
  VALUES (SEQ_ASSUNTO.NEXTVAL, 'DRAMA'); 
INSERT INTO ASSUNTO
	(ID_ASSUNTO, DESCRICAO) 
  VALUES (SEQ_ASSUNTO.NEXTVAL, 'ESPIONAGEM'); 
INSERT INTO ASSUNTO
	(ID_ASSUNTO, DESCRICAO) 
  VALUES (SEQ_ASSUNTO.NEXTVAL, 'ERÓTICO');
INSERT INTO ASSUNTO
	(ID_ASSUNTO, DESCRICAO) 
  VALUES (SEQ_ASSUNTO.NEXTVAL, 'FANTASIA');
INSERT INTO ASSUNTO
	(ID_ASSUNTO, DESCRICAO) 
  VALUES (SEQ_ASSUNTO.NEXTVAL, 'FAROESTE');
INSERT INTO ASSUNTO
	(ID_ASSUNTO, DESCRICAO) 
  VALUES (SEQ_ASSUNTO.NEXTVAL, 'FICÇÃO CIENTÍFICA');
INSERT INTO ASSUNTO
	(ID_ASSUNTO, DESCRICAO) 
  VALUES (SEQ_ASSUNTO.NEXTVAL, 'GUERRA');
INSERT INTO ASSUNTO
	(ID_ASSUNTO, DESCRICAO) 
  VALUES (SEQ_ASSUNTO.NEXTVAL, 'MUSICAL');
INSERT INTO ASSUNTO
	(ID_ASSUNTO, DESCRICAO) 
  VALUES (SEQ_ASSUNTO.NEXTVAL, 'ROMANCE');
INSERT INTO ASSUNTO
	(ID_ASSUNTO, DESCRICAO) 
  VALUES (SEQ_ASSUNTO.NEXTVAL, 'SUSPENSE');
INSERT INTO ASSUNTO
	(ID_ASSUNTO, DESCRICAO) 
  VALUES (SEQ_ASSUNTO.NEXTVAL, 'TERROR'); 
  

---- INSERINDO DADOS TABELA EXIBICAO --
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 1, 		1,		1,		  14, 		11,			1, 		 105, 	958.35);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 2, 		2,		2,		  13,	 	10,			2, 	      200,	345.78);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 3, 		3,		3,		  12, 		9, 			3, 		 315, 	258.58);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 4, 		4,   	4,		   	11, 		8, 		4, 		 412,     998.18);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 5, 		5,		5,			10,			7, 		5, 		 158,	  858.23);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 6, 		6,		6,			9, 			6, 			6, 	   997,	  758.38);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 7, 		7,		7,			8, 			5, 			7, 	   558,   658.15);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 8, 		8,		8,			7, 			4, 			8, 	   679,   558.09);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 9, 		9,		9,			6, 			3, 			9, 	  327,    358.95);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 10, 		10,		10,			5, 			2, 		10, 	  667,	  458.98);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 1, 		1,		11,		4, 			1, 			11, 	  25, 	  158.97);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 2, 		2,		12,			3, 			11,			12, 	131,  978.96);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 3, 		3,		13,			2, 			10,			13, 	 258, 988.78);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 4, 		4,		1,			1, 			9, 			14,     123,  998.77);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 5, 		5,		2,			1, 			8, 			15,		 189, 948.76);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 6, 		6,		3,			2, 			7, 			16,		98,   938.75);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 7, 		7,		4,			3, 			6, 			17,		75,   928.74);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 8, 		8,		5,			4, 			5, 			1,		 83,  918.73);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 9, 		9,		6,			5, 			4, 			2, 		 98,  758.85);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 10, 		10,		7,			6, 			3, 			3, 		 108,  658.88);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 1, 		1,		8,			7, 			2, 			4, 		77,   558.89);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 2, 		2,		9,			8, 			1, 			5, 		155,  458.82);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 3, 		3,		10,			9,  		1, 			6, 		 245, 358.65);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 4, 		4,		11,			10, 		3, 			7, 		 138, 258.66);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 5, 		5,		12,			11, 		5, 			8, 		  33, 858.64);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 6, 		6,		13,			12, 		7, 			9, 		  22, 589.63);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 7, 		7,		1,			13, 		9, 			10, 	  17, 859.55);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 8, 		8,		2,			14, 		11,			11, 	  24, 758.54);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 9, 		9,		3,			3, 			2, 			12,      16,  635.23);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 10, 		10,		4,			4, 			4, 			13, 	  10, 	512.82);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 1, 		1,		5,			5, 			6, 			14, 	  82,	978.91);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 2, 		2,		13,			6, 			8, 			15, 	  86, 	999.99);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 3, 		3,		13,			7, 			10,			16, 	  18, 	777.77);
INSERT INTO EXIBICAO								
	(ID_CINEMA, ID_LOCAL, ID_TEMPO, ID_ATOR, ID_DIRETOR, ID_ASSUNTO, QUANTIDADE, VALOR)	
VALUES ( 4, 		4,		10,			8, 			11,			17, 	  39, 	666.05);


SELECT LOCAL.CIDADE"CIDADE", LOCAL.ESTADO"ESTADO", LOCAL.REGIAO"REGIÃO", CINEMA.NOME_CINE"SALA CINEMA", ASSUNTO.DESCRICAO"GÊNERO", SUM(EXIBICAO.QUANTIDADE)"PUBLICO", SUM(EXIBICAO.VALOR)"VALOR R$"
FROM EXIBICAO
INNER JOIN LOCAL ON EXIBICAO.ID_LOCAL = LOCAL.ID_LOCAL
INNER JOIN CINEMA ON EXIBICAO.ID_CINEMA = CINEMA.ID_CINEMA
INNER JOIN ASSUNTO ON EXIBICAO.ID_ASSUNTO = ASSUNTO.ID_ASSUNTO
GROUP BY CUBE (LOCAL.CIDADE, LOCAL.ESTADO, LOCAL.REGIAO, CINEMA.NOME_CINE, ASSUNTO.DESCRICAO);

SELECT LOCAL.CIDADE"CIDADE", LOCAL.ESTADO"ESTADO", LOCAL.REGIAO"REGIÃO", CINEMA.NOME_CINE"SALA CINEMA", ASSUNTO.DESCRICAO"GÊNERO", SUM(EXIBICAO.QUANTIDADE)"PUBLICO", SUM(EXIBICAO.VALOR)"VALOR R$"
FROM EXIBICAO
INNER JOIN LOCAL ON EXIBICAO.ID_LOCAL = LOCAL.ID_LOCAL
INNER JOIN CINEMA ON EXIBICAO.ID_CINEMA = CINEMA.ID_CINEMA
INNER JOIN ASSUNTO ON EXIBICAO.ID_ASSUNTO = ASSUNTO.ID_ASSUNTO
GROUP BY (LOCAL.CIDADE, LOCAL.ESTADO, LOCAL.REGIAO, CINEMA.NOME_CINE, ASSUNTO.DESCRICAO);

SELECT LOCAL.CIDADE"CIDADE", LOCAL.ESTADO"ESTADO", LOCAL.REGIAO"REGIÃO", CINEMA.NOME_CINE"SALA CINEMA", ASSUNTO.DESCRICAO"GÊNERO", SUM(EXIBICAO.QUANTIDADE)"PUBLICO", SUM(EXIBICAO.VALOR)"VALOR R$"
FROM EXIBICAO
INNER JOIN LOCAL ON EXIBICAO.ID_LOCAL = LOCAL.ID_LOCAL
INNER JOIN CINEMA ON EXIBICAO.ID_CINEMA = CINEMA.ID_CINEMA
INNER JOIN ASSUNTO ON EXIBICAO.ID_ASSUNTO = ASSUNTO.ID_ASSUNTO
GROUP BY CUBE (LOCAL.CIDADE, LOCAL.ESTADO, LOCAL.REGIAO, CINEMA.NOME_CINE, ASSUNTO.DESCRICAO)
ORDER BY CIDADE;

SELECT ATOR.NOME_ATOR"ATOR", DIRETOR.NOME_DIR"DIRETOR", SUM(EXIBICAO.QUANTIDADE)"PUBLICO", SUM(EXIBICAO.VALOR)"VALOR R$"
FROM EXIBICAO
INNER JOIN ATOR ON EXIBICAO.ID_ATOR = ATOR.ID_ATOR
INNER JOIN DIRETOR ON EXIBICAO.ID_DIRETOR = DIRETOR.ID_DIRETOR
GROUP BY CUBE (ATOR.NOME_ATOR, DIRETOR.NOME_DIR);

SELECT DIRETOR.NOME_DIR"DIRETOR", ASSUNTO.DESCRICAO, SUM(EXIBICAO.QUANTIDADE)"PUBLICO", SUM(EXIBICAO.VALOR)"VALOR"
FROM EXIBICAO
INNER JOIN DIRETOR ON EXIBICAO.ID_DIRETOR = DIRETOR.ID_DIRETOR
INNER JOIN ASSUNTO ON ASSUNTO.ID_ASSUNTO = ASSUNTO.ID_ASSUNTO
GROUP BY CUBE (DIRETOR.NOME_DIR, ASSUNTO.DESCRICAO)
ORDER BY PUBLICO DESC;

SELECT LOCAL.REGIAO"REGIÃO", ASSUNTO.DESCRICAO"GÊNERO",  ATOR.NOME_ATOR"ATOR", DIRETOR.NOME_DIR"DIRETOR", TEMPO.MESES"MÊS", SUM(EXIBICAO.QUANTIDADE)"PUBLICO", SUM(EXIBICAO.VALOR)"VALOR"
FROM EXIBICAO
INNER JOIN LOCAL ON EXIBICAO.ID_LOCAL = LOCAL.ID_LOCAL
INNER JOIN CINEMA ON EXIBICAO.ID_CINEMA = CINEMA.ID_CINEMA
INNER JOIN ASSUNTO ON EXIBICAO.ID_ASSUNTO = ASSUNTO.ID_ASSUNTO
INNER JOIN ATOR ON EXIBICAO.ID_ATOR = ATOR.ID_ATOR
INNER JOIN DIRETOR ON EXIBICAO.ID_DIRETOR = DIRETOR.ID_DIRETOR
INNER JOIN TEMPO ON EXIBICAO.ID_TEMPO = TEMPO.ID_TEMPO
GROUP BY CUBE (LOCAL.REGIAO, ASSUNTO.DESCRICAO, ATOR.NOME_ATOR, DIRETOR.NOME_DIR, TEMPO.MESES);



-- Testando outros GROUP BY
-- Group By: Rollup
SELECT ATOR.NOME_ATOR"ATOR", DIRETOR.NOME_DIR"DIRETOR", SUM(EXIBICAO.QUANTIDADE)"PUBLICO", SUM(EXIBICAO.VALOR)"VALOR R$"
FROM EXIBICAO
INNER JOIN ATOR ON EXIBICAO.ID_ATOR = ATOR.ID_ATOR
INNER JOIN DIRETOR ON EXIBICAO.ID_DIRETOR = DIRETOR.ID_DIRETOR
GROUP BY ATOR.NOME_ATOR, ROLLUP(DIRETOR.NOME_DIR);

SELECT ATOR.NOME_ATOR"ATOR", DIRETOR.NOME_DIR"DIRETOR", SUM(EXIBICAO.QUANTIDADE)"PUBLICO", SUM(EXIBICAO.VALOR)"VALOR R$"
FROM EXIBICAO
INNER JOIN ATOR ON EXIBICAO.ID_ATOR = ATOR.ID_ATOR
INNER JOIN DIRETOR ON EXIBICAO.ID_DIRETOR = DIRETOR.ID_DIRETOR
GROUP BY ROLLUP(ATOR.NOME_ATOR, DIRETOR.NOME_DIR);


-- Grouping Sets
SELECT LOCAL.CIDADE"CIDADE", LOCAL.ESTADO"ESTADO", LOCAL.REGIAO"REGIÃO", CINEMA.NOME_CINE"SALA CINEMA", ASSUNTO.DESCRICAO"GÊNERO", SUM(EXIBICAO.QUANTIDADE)"PUBLICO", SUM(EXIBICAO.VALOR)"VALOR R$"
FROM EXIBICAO
INNER JOIN LOCAL ON EXIBICAO.ID_LOCAL = LOCAL.ID_LOCAL
INNER JOIN CINEMA ON EXIBICAO.ID_CINEMA = CINEMA.ID_CINEMA
INNER JOIN ASSUNTO ON EXIBICAO.ID_ASSUNTO = ASSUNTO.ID_ASSUNTO
GROUP BY GROUPING SETS  ((LOCAL.CIDADE, LOCAL.ESTADO),
                        (LOCAL.ESTADO, LOCAL.REGIAO));