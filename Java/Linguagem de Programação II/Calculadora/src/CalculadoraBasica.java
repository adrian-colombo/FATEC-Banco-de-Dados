
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

}
