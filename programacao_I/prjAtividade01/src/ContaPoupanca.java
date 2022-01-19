public class ContaPoupanca extends Conta{
    public ContaPoupanca() {
    }

    public ContaPoupanca(int numero, int agencia, Cliente cliente) {
        super(numero, agencia, cliente);
    }    

    @Override
    public void sacar(double valor) {
        System.out.println("\nSacar na conta::  R$: "+valor);
        if(getSaldo() > 0 && getSaldo() >= valor){
            double novoSalario = getSaldo() - valor;
            saldo = novoSalario;
        }else{
            System.out.println("Saldo insuficiente.\n");
        }
    }
    @Override
    public String getDocumentos() {
       return getCliente().getDocumentos() + "\nNumero conta: "+getNumero()+"\nAgencia: "+getAgencia() + "\nSaldo: "+getSaldo();
    }
}
