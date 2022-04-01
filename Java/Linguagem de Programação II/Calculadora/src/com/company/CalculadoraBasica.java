package com.company;

public class CalculadoraBasica extends Calculadora {

    public CalculadoraBasica() {
        // TODO Auto-generated constructor stub
    }

    @Override
    public double soma(double a, double b) {
        return a + b;
    }

    @Override
    public double subtracao(double a, double b) {
        return a - b;
    }

    @Override
    public double produto(double a, double b) {
        return  a*b;
    }

    @Override
    public double divisao(double a, double b) throws Exception {
        if (b == 0) {
            throw new Exception();
        } else{
            return a/b;
        }
    }

    public void mostrar() {
        System.out.println("-- Calculadora Basica --");
        System.out.println("Soma: " + a + " + " + b + " = " + soma(a,b));
        System.out.println("Subtracao: " + a + " - " + b + " = " + subtracao(a,b));
        System.out.println("Produto: " + a + " x " + b + " = " + produto(a,b));
        try {
            System.out.println("Divisao: " + a + " / " + b + " = " + divisao(a,b));
        } catch (Exception e) {
            System.out.println("Divisao: " + a + " / " + b + " = Eh impossivel dividir por 0!");
        }
        System.out.println();

    }
}
