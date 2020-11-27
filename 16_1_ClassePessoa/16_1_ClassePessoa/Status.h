#pragma once
// enum antigo
enum Status
{
	Pendente,
	Aprovado,
	Cancelado
};

// Scoped Enum - enum com escopo
// Permite que o tipo por debaixo do enum seja outro diferente de int
// Nomes nao precisam ser unicos
// Uso do nome completamente qualificado
// Essa deve ser a escolha prioritaria de enum
enum class ErroDeArquivo
{
	nao_encontrado,
	ok  // mesmo nome OK do enum de baixo
};

enum class ErroDeRede
{
	desconectado,
	ok  // mesmo nome OK do enum de cima
};