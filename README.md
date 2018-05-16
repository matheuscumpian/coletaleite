# Coleta de Leite
Dom Ratón é uma pequena empresa produtora de queijos, situada na zona rural do município de Limeira. Por ser uma empresa familiar e de pequeno porte, ela não tem capacidade de armazenar sua principal matéria prima, o leite. Sendo assim, diariamente o caminhão da Dom Ratón percorre seus fornecedores, recolhendo o leite que será utilizado na produção diária de queijos.

A produção diária da Dom Ratón também varia conforme o número de pedidos que devem ser atendidos, de forma que a quantidade de leite que deve ser comprada a cada dia é variável. Além disso, a empresa possui uma capacidade máxima de produção diária, o que limita a quantidade de fornecedores que é visitada a cada dia.

Visando reduzir os custos com o combustível gasto na coleta diária de leite, o dono da empresa Dom Ratón, sr. Mickelino Rato, resolveu contratar um especialista em programação (você!) para criar um programa capaz de obter a melhor rota a ser seguida pelo caminhão da empresa a cada dia.

Sendo assim, o programa que você irá desenvolver receberá como entrada o número N (um valor inteiro) de produtores de leite que serão visitados em um dado dia (no máximo 4) e, na sequência, as coordenadas (x e y - valores em ponto flutuante) da empresa e dos N produtores a serem visitados. Tendo estes valores armazenados, seu programa deverá obter todas as possíveis rotas, que se iniciam na empresa, passam em cada produtor de leite uma única vez e retornem à empresa, além do custo de cada rota. Este custo será dado pela soma da distância euclidiana entre cada par de pontos visitados pelo caminhão. Ao final, seu programa deverá exibir o custo da melhor rota encontrada.

O problema a ser resolvido por você é uma variação de um problema muito conhecido na computação, chamado de Problema do Caixeiro Viajante. Este problema vem sendo estudado desde 1930 e, apesar de sua complexidade aumentar significativamente em função do número de cidades, na literatura existem muitas técnicas propostas para resolvê-lo.

Para resolver um problema de Caixeiro Viajante, a forma mais simples (mas infactível para a maioria das instâncias reais do problema) é, para um dado conjunto de cidades, gerar todas as possíveis rotas que atendam às exigências do problema, calcular o custo de cada uma delas e identificar a solução de menor custo. Para ilustrar este procedimento, considere o conjunto de cidades dado na Figura 1.

Exemplo de TSP
Figura 1 - Exemplo de instância de Caixeiro Viajante com 4 cidades. Os valores correspondem às distâncias entre as cidades.
Para o problema apresentado na Figura 1 e supondo que o ponto de partida (e retorno) é a cidade identificada por A, o conjunto de todas as possíveis rotas e seus respectivos custos são dados na Tabela 1. Note que não há visitas repetidas em nenhuma rota, o que é uma restrição do problema, e que a obtenção de todas as possíveis rotas que passam pelas N = 4 cidades resultou em 6 soluções, ou seja, a (N - 1)! soluções.

Tabela 1 - Rotas e custos para o problema dado na Figura 1.
Rota	Custo da Rota
A B C D A	20 + 30 + 12 + 35 = 97
A B D C A	20 + 34 + 12 + 42 = 108
A C B D A	42 + 30 + 34 + 35 = 141
A C D B A	42 + 12 + 34 + 20 = 108
A D B C A	35 + 34 + 30 + 42 = 141
A D C B A	35 + 12 + 30 + 20 = 97
Dado o contexto acima, nesta atividade você deve implementar um programa, em linguagem C, equivalente a um programa que resolva o problema do Caixeiro Viajante com N+1 cidades (N fornecedores de leite mais a empresa Dom Ratón).


Observações:
A entrada do seu programa corresponderá ao número de fornecedores de leite e às coordenadas de cada fornecedor, sendo uma por linha. Ou seja, seu programa deve ler, após o valor N, N+1 linhas de dados que correspondem às coordenadas x e y da empresa (sempre a primeira coordenada) e de cada fornecedor.
Para cada caso de teste, seu programa deve imprimir o custo total para visitar os N fornecedores, associado à melhor rota, com duas casas decimais (vide exemplo) e seguido de uma quebra de linha.
Para facilitar a busca pela melhor solução, seu programa deverá gerar todas as possíveis rotas (partindo da empresa Dom Ratón (primeira coordenada), visitando todos os fornecedores e retornando à empresa) e calcular o custo associado a cada uma delas.

Exemplo de execução:
1
8.15	1.58
9.06	9.71
Distancia a ser percorrida:: 16.36
