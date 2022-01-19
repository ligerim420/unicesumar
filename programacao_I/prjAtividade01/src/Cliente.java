public class Cliente {
    //nome e cpf, ambos String;
    private String nome;
    private String cpf;

    public String getNome() {
        return nome;
    }

    public String getCpf() {
        return cpf;
    }

    public Cliente() {
    }

    public Cliente(String nome, String cpf) {
        this.nome = nome;
        this.cpf = cpf;
    }
    
    public String getDocumentos(){
        return "Nome: "+getNome() + "\nCpf: "+getCpf();
    }
    
}
