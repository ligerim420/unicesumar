public abstract class Conta {
    //número, agência, cliente e saldo
    protected int numero;
    protected int agencia;
    protected Cliente cliente;
    protected double saldo;

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        if(numero > 0){
            this.numero = numero;
        }else{
            System.out.println("Valor inválido");
        }
    }

    public int getAgencia() {
        return agencia;
    }

    public void setAgencia(int agencia) {        
         if(agencia > 0){
            this.agencia = agencia;
        }else{
            System.out.println("Valor inválido");
        }
    }

    public Cliente getCliente() {
        return cliente;
    }

    public void setCliente(Cliente cliente) {
        this.cliente = cliente;
    }
    public double getSaldo() {
        return saldo;
    }

   
    
    public Conta() {
    }

    public Conta(int numero, int agencia, Cliente cliente) {
        this.numero = numero;
        this.agencia = agencia;
        this.cliente = cliente;
        this.saldo = 0;
    }
    public abstract void  sacar(double valor);
    
    public void depositar(double valor){
        if(valor > 0){
            System.out.println("\nDeposito em conta R$: "+valor);
            this.saldo += valor;
        }else{
            System.out.println("\nValor tem que ser maior que Zero ");
        }
        
    }
    public abstract String getDocumentos();
}