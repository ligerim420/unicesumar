package br.unicesumar.mapa.controle;

import java.io.Serializable;
import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

import br.unicesumar.mapa.exceptions.DadoConsultadoException;
import br.unicesumar.mapa.modelo.Projeto;

public class ProjetoImpl implements ProjetoDAO, Serializable {
	private static final long serialVersionUID = 1L;

	private static Set<Projeto> projetos = new HashSet<>();

	@Override
	public void adicionar(Projeto projeto) {
		projetos.add(projeto);
	}

	@Override
	public List<Projeto> listar() {
		List<Projeto> projetoList = new ArrayList<>();
		projetoList.addAll(projetos);
		return projetoList;
	}

	@Override
	public Projeto consultarPorNome(String nome) throws DadoConsultadoException {
		for(Projeto pj : projetos ) {
			if(pj.getNome().equalsIgnoreCase(nome)) {
				return pj;
			}
		}
		throw new DadoConsultadoException("Projeto não encontrada com nome: " + nome);
	}

	@Override
	public Projeto alterar(String nome, Projeto projeto) throws DadoConsultadoException {
		Projeto projetoEncontrado = consultarPorNome(nome);
		projetoEncontrado.setNome(projeto.getNome());
		projetoEncontrado.setObjetivo(projeto.getObjetivo());
		projetoEncontrado.setNecessidades(projeto.getNecessidades());
		projetoEncontrado.setDataInicio(projeto.getDataInicio());
		projetoEncontrado.setDataFinal(projeto.getDataFinal());
		projetoEncontrado.setStatus(projeto.getStatus());
		return projetoEncontrado;
	}

	@Override
	public void excluir(Projeto projeto) throws DadoConsultadoException, UnsupportedOperationException {
		if(projetos.contains(projeto)) {
			projetos.remove(projeto);
			return;
		}
		throw new DadoConsultadoException("Nao foi encontrado o projeto para exclução.");
	}

	@Override
	public void excluir(String nome) throws DadoConsultadoException, UnsupportedOperationException {
		Projeto projeto = consultarPorNome(nome);
		excluir(projeto);
	}

}