
public class Principal {
    
    public static void main(String[] args) {
        Cliente cliente = new Cliente("LUCAS ALMEIDA DE OLIVEIRA", "100.465.788-64");
        ContaCorrente cc = new ContaCorrente(2080, 841, cliente);
        
        ContaPoupanca cp = new ContaPoupanca(2080, 841, cliente);
        
        System.out.println("\t\tConta Corrente");
        System.out.println(cc.getDocumentos());
       
        cc.depositar(4500);
        cc.sacar(5500);
        System.out.println("\nDados da conta corrente:");
        System.out.println(cc.getDocumentos());
        
        
        System.out.println("\n:::::::::::::::::::::::::::::::::::::::\n");
        System.out.println("\n\tConta Poupamça\n");
        System.out.println(cc.getDocumentos());
        cp.depositar(3000);
        cp.sacar(2000);
        System.out.println("\n"+cp.getDocumentos());
    }   
}
