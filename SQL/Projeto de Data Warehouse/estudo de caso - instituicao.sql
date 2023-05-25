-- Dimensões
CREATE TABLE TEMPO (
    ID_TEMPO NUMBER PRIMARY KEY,
    DIA NUMBER(2) NOT NULL,
    MES NUMBER(2) NOT NULL,
    ANO NUMBER(4) NOT NULL,
    TRIM NUMBER(1) NOT NULL
);

CREATE TABLE CURSO (
    ID_CURSO NUMBER PRIMARY KEY,
    DESCRICAO VARCHAR2(200)
);

CREATE TABLE PERIODO (
    ID_PERIODO NUMBER PRIMARY KEY,
    DESCRICAO VARCHAR2(250) NOT NULL
);

CREATE TABLE FAIXA_ETARIA (
    ID_FAIXA NUMBER PRIMARY KEY,
    DESCRICAO VARCHAR2(150) NOT NULL
);

CREATE TABLE INSTITUICAO(
    ID_INSTITUICAO NUMBER PRIMARY KEY,
    NOME VARCHAR2(120),
    CIDADE VARCHAR2(120),
    UF VARCHAR2(2)
);

-- Fatos
CREATE TABLE FATURAMENTO (
    ID_TEMPO NUMBER,
    ID_CURSO NUMBER,
    TIPO_ALUNO CHAR(1),
    CONT NUMBER,
    VALOR NUMBER(7,2),
    CONSTRAINT CK_TIPO_ALUNO CHECK (TIPO_ALUNO IN ('B', 'I')),
    CONSTRAINT FK_FATURAMENTO_TEMPO FOREIGN KEY (ID_TEMPO) REFERENCES TEMPO (ID_TEMPO),
    CONSTRAINT FK_FATURAMENTO_CURSO FOREIGN KEY (ID_CURSO) REFERENCES CURSO (ID_CURSO)
);

CREATE TABLE DESISTENCIA (
    ID_TEMPO NUMBER,
    ID_CURSO NUMBER,
    ID_PERIODO NUMBER,
    TIPO_ALUNO_DES CHAR(1),
    ID_FAIXA NUMBER,
    ID_INSTITUICAO NUMBER,
    GENERO CHAR(1),
    CAPTACAO VARCHAR2(150),
    ESCOLARIDADE VARCHAR2(150),
    QUANTIDADE NUMBER,
    CONSTRAINT CK_TIPO_ALUNO_DES CHECK (TIPO_ALUNO_DES IN ('B', 'I')),
    CONSTRAINT CK_GENERO CHECK (GENERO IN ('F', 'M')),
    CONSTRAINT FK_DESISTENCIA_TEMPO FOREIGN KEY (ID_TEMPO) REFERENCES TEMPO (ID_TEMPO),
    CONSTRAINT FK_DESISTENCIA_CURSO FOREIGN KEY (ID_CURSO) REFERENCES CURSO (ID_CURSO),
    CONSTRAINT FK_DESISTENCIA_PERIODO FOREIGN KEY (ID_PERIODO) REFERENCES PERIODO (ID_PERIODO),
    CONSTRAINT FK_DESISTENCIA_FAIXA_ETARIA FOREIGN KEY (ID_FAIXA) REFERENCES FAIXA_ETARIA (ID_FAIXA),
    CONSTRAINT FK_DESISTENCIA_INSTITUICAO FOREIGN KEY (ID_INSTITUICAO) REFERENCES INSTITUICAO (ID_INSTITUICAO)
);

-- Inserts
INSERT INTO TEMPO (ID_TEMPO, DIA, MES, ANO, TRIM) VALUES (1, 25, 4, 2023, 2);
INSERT INTO TEMPO (ID_TEMPO, DIA, MES, ANO, TRIM) VALUES (2, 12, 3, 2023, 1);
INSERT INTO TEMPO (ID_TEMPO, DIA, MES, ANO, TRIM) VALUES (3, 10, 2, 2023, 1);

INSERT INTO CURSO (ID_CURSO, DESCRICAO) VALUES (1, 'Ciência da Computação');
INSERT INTO CURSO (ID_CURSO, DESCRICAO) VALUES (2, 'Engenharia Civil');
INSERT INTO CURSO (ID_CURSO, DESCRICAO) VALUES (3, 'Medicina');

INSERT INTO PERIODO (ID_PERIODO, DESCRICAO) VALUES (1, 'Manhã');
INSERT INTO PERIODO (ID_PERIODO, DESCRICAO) VALUES (2, 'Tarde');
INSERT INTO PERIODO (ID_PERIODO, DESCRICAO) VALUES (3, 'Noite');

INSERT INTO FAIXA_ETARIA (ID_FAIXA, DESCRICAO) VALUES (1, '18-24 anos');
INSERT INTO FAIXA_ETARIA (ID_FAIXA, DESCRICAO) VALUES (2, '25-30 anos');
INSERT INTO FAIXA_ETARIA (ID_FAIXA, DESCRICAO) VALUES (3, '31-35 anos');

INSERT INTO INSTITUICAO (ID_INSTITUICAO, NOME, CIDADE, UF) VALUES (1, 'Universidade Federal de Minas Gerais', 'Belo Horizonte', 'MG');
INSERT INTO INSTITUICAO (ID_INSTITUICAO, NOME, CIDADE, UF) VALUES (2, 'Universidade de São Paulo', 'São Paulo', 'SP');
INSERT INTO INSTITUICAO (ID_INSTITUICAO, NOME, CIDADE, UF) VALUES (3, 'Universidade Federal do Rio de Janeiro', 'Rio de Janeiro', 'RJ');

INSERT INTO FATURAMENTO (ID_TEMPO, ID_CURSO, TIPO_ALUNO, CONT, VALOR) VALUES (1, 1, 'B', 1, 200.00);
INSERT INTO FATURAMENTO (ID_TEMPO, ID_CURSO, TIPO_ALUNO, CONT, VALOR) VALUES (1, 1, 'I', 1, 300.00);
INSERT INTO FATURAMENTO (ID_TEMPO, ID_CURSO, TIPO_ALUNO, CONT, VALOR) VALUES (2, 3, 'I', 1, 500.00);

INSERT INTO DESISTENCIA (ID_TEMPO, ID_CURSO, ID_PERIODO, TIPO_ALUNO_DES, ID_FAIXA, ID_INSTITUICAO, GENERO, CAPTACAO, ESCOLARIDADE, QUANTIDADE)
            VALUES (1, 1, 1, 'B', 1, 1, 'F', 'Vestibular', 'Ensino Médio', 1);
INSERT INTO DESISTENCIA (ID_TEMPO, ID_CURSO, ID_PERIODO, TIPO_ALUNO_DES, ID_FAIXA, ID_INSTITUICAO, GENERO, CAPTACAO, ESCOLARIDADE, QUANTIDADE)
            VALUES (2, 2, 2, 'B', 2, 2, 'F', 'Vestibular', 'Ensino Médio', 1);
INSERT INTO DESISTENCIA (ID_TEMPO, ID_CURSO, ID_PERIODO, TIPO_ALUNO_DES, ID_FAIXA, ID_INSTITUICAO, GENERO, CAPTACAO, ESCOLARIDADE, QUANTIDADE)
            VALUES (3, 3, 3, 'I', 3, 3, 'M', 'Vestibular', 'Ensino Médio', 1);
            

-- Selects
/* 1.   Deseja-se saber quanto a instituição fatura a partir dos alunos que pagam integralmente e dos alunos bolsistas.
        Além disso, qual é o quantitativo de alunos responsável por cada uma dessas parcelas de faturamento descritas anteriormente
        (ou seja, quantos alunos integrais e quantos bolsistas). Também se deseja saber quanto cada parcela de faturamento (integrais e bolsistas)
        representa do faturamento total, em termos percentuais. */
SELECT  TEMPO.MES, TIPO_ALUNO "Tipo do Aluno",
		TO_CHAR(SUM(VALOR), 'FM999999999999999D00') AS "Total (R$)",        -- TO CHAR ('FM999999999999999D00'), adiciona ,00
    	COUNT(CASE WHEN TIPO_ALUNO = 'I' THEN 1 END) AS "Qtde. Integral",  
    	COUNT(CASE WHEN TIPO_ALUNO = 'B' THEN 1 END) AS "Qtde. Bolsista",
        ROUND(SUM(CASE WHEN TIPO_ALUNO = 'I' THEN VALOR ELSE 0 END) / SUM(VALOR) * 100, 2) AS "% Integral", 
        ROUND(SUM(CASE WHEN TIPO_ALUNO = 'B' THEN VALOR ELSE 0 END) / SUM(VALOR) * 100, 2) AS "% Bolsistas"
FROM FATURAMENTO
INNER JOIN TEMPO ON TEMPO.ID_TEMPO = FATURAMENTO.ID_TEMPO
GROUP BY CUBE(TEMPO.MES, TIPO_ALUNO);

/* 2.   Deseja-se analisar os mesmos valores do item (1) acrescentando-se a informação dos cursos, isto é, detalhes do faturamento por curso. */
SELECT  TEMPO.MES "Mês",
        TIPO_ALUNO "Tipo do Aluno",
        CURSO.DESCRICAO "Curso",
		TO_CHAR(SUM(VALOR), 'FM999999999999999D00') AS "Total (R$)",
    	COUNT(CASE WHEN TIPO_ALUNO = 'I' THEN 1 END) AS "Qtde. Integral",
    	COUNT(CASE WHEN TIPO_ALUNO = 'B' THEN 1 END) AS "Qtde. Bolsista",
        ROUND(SUM(CASE WHEN TIPO_ALUNO = 'I' THEN VALOR ELSE 0 END) / SUM(VALOR) * 100, 2) AS "% Integral", 
        ROUND(SUM(CASE WHEN TIPO_ALUNO = 'B' THEN VALOR ELSE 0 END) / SUM(VALOR) * 100, 2) AS "% Bolsistas"
FROM FATURAMENTO
INNER JOIN TEMPO ON TEMPO.ID_TEMPO = FATURAMENTO.ID_TEMPO
INNER JOIN CURSO ON CURSO.ID_CURSO = FATURAMENTO.ID_CURSO
GROUP BY CUBE(TEMPO.MES, TIPO_ALUNO, CURSO.DESCRICAO);

/* 3.   Deseja-se conhecer o perfil do aluno que desiste do curso: percentual dos desistentes que são integrais ou bolsistas, percentual
        dos desistentes por período, percentual dos desistentes por sexo (feminino/masculino),idade e curso.*/
SELECT  TEMPO.MES "Mês",
        ROUND(COUNT(CASE WHEN TIPO_ALUNO_DES = 'I' THEN 1 END) * 100 / COUNT(*), 2) AS "% Integral",
        ROUND(COUNT(CASE WHEN TIPO_ALUNO_DES = 'B' THEN 1 END) * 100 / COUNT(*), 2) AS "% Bolsista",
        ROUND(COUNT(CASE WHEN ID_PERIODO = 1 THEN 1 END) * 100 / COUNT(*), 2) AS "% Manhã",
        ROUND(COUNT(CASE WHEN ID_PERIODO = 3 THEN 1 END) * 100 / COUNT(*), 2) AS "% Noite",
        ROUND(COUNT(CASE WHEN GENERO = 'F' THEN 1 END) * 100 / COUNT(*), 2) AS "% Mulher",
        ROUND(COUNT(CASE WHEN GENERO = 'M' THEN 1 END) * 100 / COUNT(*), 2) AS "% Homem",
        FAIXA_ETARIA.DESCRICAO "Faixa Etária",
        CURSO.DESCRICAO AS CURSO
FROM 
DESISTENCIA
INNER JOIN TEMPO ON TEMPO.ID_TEMPO = DESISTENCIA.ID_TEMPO
INNER JOIN FAIXA_ETARIA ON FAIXA_ETARIA.ID_FAIXA = DESISTENCIA.ID_FAIXA
INNER JOIN CURSO ON DESISTENCIA.ID_CURSO = CURSO.ID_CURSO
GROUP BY CUBE( TEMPO.MES, FAIXA_ETARIA.DESCRICAO, CURSO.DESCRICAO);


 /*4.   Deseja-se fazer um paralelo entre o perfil do aluno desistente com sua entrada na instituição. Por exemplo, o maior percentual do aluno 
        que desiste é aquele que entra por vestibular, transferência, etc? É o aluno que está tentando a primeira graduação ou aquele que já
        tem o diploma de algum outro curso? */
SELECT  CAPTACAO AS "Captação",
        ESCOLARIDADE AS "Escolaridade",
        ROUND(COUNT(*) * 100.0 / (SELECT COUNT(*) FROM DESISTENCIA), 2) AS PERCENTUAL
FROM    DESISTENCIA
GROUP BY ROLLUP(CAPTACAO, ESCOLARIDADE)
ORDER BY PERCENTUAL DESC;


 /*     Além dessas quatro necessidades, pensar em mais dois relatórios que o usuário do sistema poderia criar utilizando o modelo disponível.
        A apresentação dos relatórios pode ser em formato de planilha ou gráficos diversos. */

SELECT 	CURSO.DESCRICAO AS "Curso",
		FAT.TIPO_ALUNO AS "Tipo do Aluno",
    	TEMPO.MES "Mês",
    	TEMPO.ANO "Ano",
    	SUM(FAT.CONT) AS CONT,
    	ROUND(SUM(FAT.VALOR),2) AS VALOR,
		ROUND(AVG(FAT.VALOR/FAT.CONT),2) AS "Valor Médio"
FROM FATURAMENTO FAT
JOIN CURSO ON FAT.ID_CURSO = CURSO.ID_CURSO
JOIN TEMPO ON FAT.ID_TEMPO = TEMPO.ID_TEMPO
GROUP BY ROLLUP(CURSO.DESCRICAO, FAT.TIPO_ALUNO, TEMPO.MES, TEMPO.ANO);

SELECT CURSO.DESCRICAO AS "Curso",
    	PERIODO.DESCRICAO AS "Perído",
    	FAIXA_ETARIA.DESCRICAO AS "Faixa Etária",
    	DES.TIPO_ALUNO_DES "Tipo do Aluno",
    	SUM(DES.QUANTIDADE) AS "Quantidade"
FROM 
    DESISTENCIA DES
    JOIN CURSO ON DES.ID_CURSO = CURSO.ID_CURSO
    JOIN PERIODO ON DES.ID_PERIODO = PERIODO.ID_PERIODO
    JOIN FAIXA_ETARIA ON DES.ID_FAIXA = FAIXA_ETARIA.ID_FAIXA
	GROUP BY ROLLUP(CURSO.DESCRICAO, PERIODO.DESCRICAO, FAIXA_ETARIA.DESCRICAO, DES.TIPO_ALUNO_DES);