# Coleta de Leite // Trabalho disciplina SI100
Dom Ratón é uma pequena empresa produtora de queijos, situada na zona rural do município de Limeira. Por ser uma empresa familiar e de pequeno porte, ela não tem capacidade de armazenar sua principal matéria prima, o leite. Sendo assim, diariamente o caminhão da Dom Ratón percorre seus fornecedores, recolhendo o leite que será utilizado na produção diária de queijos.

A produção diária da Dom Ratón também varia conforme o número de pedidos que devem ser atendidos, de forma que a quantidade de leite que deve ser comprada a cada dia é variável. Além disso, a empresa possui uma capacidade máxima de produção diária, o que limita a quantidade de fornecedores que é visitada a cada dia.

Visando reduzir os custos com o combustível gasto na coleta diária de leite, o dono da empresa Dom Ratón, sr. Mickelino Rato, resolveu contratar um especialista em programação (você!) para criar um programa capaz de obter a melhor rota a ser seguida pelo caminhão da empresa a cada dia.

Sendo assim, o programa que você irá desenvolver receberá como entrada o número N (um valor inteiro) de produtores de leite que serão visitados em um dado dia (no máximo 4) e, na sequência, as coordenadas (x e y - valores em ponto flutuante) da empresa e dos N produtores a serem visitados. Tendo estes valores armazenados, seu programa deverá obter todas as possíveis rotas, que se iniciam na empresa, passam em cada produtor de leite uma única vez e retornem à empresa, além do custo de cada rota. Este custo será dado pela soma da distância euclidiana entre cada par de pontos visitados pelo caminhão. Ao final, seu programa deverá exibir o custo da melhor rota encontrada.

O problema a ser resolvido por você é uma variação de um problema muito conhecido na computação, chamado de Problema do Caixeiro Viajante. Este problema vem sendo estudado desde 1930 e, apesar de sua complexidade aumentar significativamente em função do número de cidades, na literatura existem muitas técnicas propostas para resolvê-lo.

Para resolver um problema de Caixeiro Viajante, a forma mais simples (mas infactível para a maioria das instâncias reais do problema) é, para um dado conjunto de cidades, gerar todas as possíveis rotas que atendam às exigências do problema, calcular o custo de cada uma delas e identificar a solução de menor custo. 
