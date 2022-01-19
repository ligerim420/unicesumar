package br.unicesumar.mapa.controle;

import java.util.List;

import br.unicesumar.mapa.exceptions.DadoConsultadoException;
import br.unicesumar.mapa.modelo.Projeto;

public interface ProjetoDAO {
 
    void adicionar(Projeto projeto);
    List<Projeto> listar();
    Projeto consultarPorNome(String nome) throws DadoConsultadoException;
    Projeto alterar(String nome, Projeto projeto) throws DadoConsultadoException;
    void excluir(Projeto projeto) throws DadoConsultadoException, UnsupportedOperationException;
    void excluir(String nome) throws DadoConsultadoException, UnsupportedOperationException;
}