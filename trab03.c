#include <math.h>
#include <stdio.h>
int main(void) {
	int numCidade = 0;
	int i;
	float m[5][2];
	float d, d1, d2, d3, d4;
	float a, a1, a2, a3, a4;
	float b, b1, b2, b3, b4;
	float c, c1, c2, c3, c4;
	float h, h1, h2, h3, h4;
	float j, j1, j2, j3, j4;
	float e, e1, e2, e3, e4;
	float k, k1, k2, k3, k4;
	float p, p1, p2, p3, p4;
	float o, o1, o2, o3, o4;
	float r, m1, m2, m3, m4;
	float n, n1, n2, n3, n4;
	float l, l1, l2, l3, l4;
	float q,q1,q2,q3,q4;
	float dis;
	// Usuário entra com o número de fornecedores
	//printf("Digite o número de fornecedores: ");
	scanf("%d", &numCidade);

	//printf("Digite as coordenadas dos fornecedores:\n");
	for (i = 0; i < numCidade + 1; i++) {
		scanf("%f %f", &m[i][0], &m[i][1]);
	}
	if (numCidade > 4 || numCidade < 1) {
		printf("Numero de produtores invalido.\n");
		return 0;
	}
	switch (numCidade) {
	case 1:
		d = sqrt(pow((m[0][0] - m[1][0]), 2) + pow((m[0][1] - m[1][1]), 2));
		printf("Distancia a ser percorrida: %.2f\n", d + d);
		return 0;

	case 2: // a - b - c - a
		d = sqrt(pow((m[0][0] - m[1][0]), 2) + pow((m[0][1] - m[1][1]), 2));
		d2 = d1 +
			sqrt(pow((m[1][0] - m[2][0]), 2) + pow((m[1][1] - m[2][1]), 2));
		d3 = d2 +
			sqrt(pow((m[2][0] - m[0][0]), 2) + pow((m[2][1] - m[0][1]), 2));

		printf("Distancia a ser percorrida: %.2f\n", d3);
		return 0;

	case 3:
		// a - b - c - d - a
		// a - b
		d = sqrt(pow((m[0][0] - m[1][0]), 2) + pow((m[0][1] - m[1][1]), 2));
		// b - c
		d1 = d +
			sqrt(pow((m[1][0] - m[2][0]), 2) + pow((m[1][1] - m[2][1]), 2));
		// c - d
		d2 = d1 +
			sqrt(pow((m[2][0] - m[3][0]), 2) + pow((m[2][1] - m[3][1]), 2));
		// d - a
		d4 = d2 +
			sqrt(pow((m[3][0] - m[0][0]), 2) + pow((m[3][1] - m[0][1]), 2));
		// A - B - D - C- A
		// a - b
		a = sqrt(pow((m[0][0] - m[1][0]), 2) + pow((m[0][1] - m[1][1]), 2));
		// b - d
		a1 =
			a + sqrt(pow((m[1][0] - m[3][0]), 2) + pow((m[1][1] - m[3][1]), 2));
		// d - c
		a2 = a1 +
			sqrt(pow((m[2][0] - m[3][0]), 2) + pow((m[2][1] - m[3][1]), 2));
		// c - a
		a3 = a2 +
			sqrt(pow((m[2][0] - m[0][0]), 2) + pow((m[2][1] - m[0][1]), 2));
		// A - C - B - D - A
		// a - c
		b = sqrt(pow((m[2][0] - m[0][0]), 2) + pow((m[2][1] - m[0][1]), 2));
		// c - b
		b1 =
			b + sqrt(pow((m[1][0] - m[2][0]), 2) + pow((m[1][1] - m[2][1]), 2));
		// b - d
		b2 = b1 +
			sqrt(pow((m[1][0] - m[3][0]), 2) + pow((m[1][1] - m[3][1]), 2));
		// d - a
		b3 = b2 +
			sqrt(pow((m[3][0] - m[0][0]), 2) + pow((m[3][1] - m[0][1]), 2));
		//printf("%f\n", d4);
		//printf("%f\n", b3);
		//printf("%f\n", a3);
		// Colocando resultados em um vetor para organização
	float vetor[] = {b3, a3, d4};;
		for (i = 0; i <= 2; i++) {
			if (i == 0)
				dis = vetor[0];
			if (vetor[i] < dis)
				dis = vetor[i];
		}
		// ORDENAÇÃO DE VETORES

		printf("Distancia a ser percorrida: %.2f\n", dis);
		return 0;
	case 4:
		// a,b,c,d,e,a = d4
		// a - b
		d = sqrt(pow((m[0][0] - m[1][0]), 2) + pow((m[0][1] - m[1][1]), 2));
		// b - c
		d1 =
			d + sqrt(pow((m[1][0] - m[2][0]), 2) + pow((m[1][1] - m[2][1]), 2));
		// c - d
		d2 = d1 +
			sqrt(pow((m[2][0] - m[3][0]), 2) + pow((m[2][1] - m[3][1]), 2));
		// d - e
		d3 = d2 +
			sqrt(pow((m[4][0] - m[3][0]), 2) + pow((m[4][1] - m[3][1]), 2));
			
		// e - a
		d4 = d3 +
			sqrt(pow((m[4][0] - m[0][0]), 2) + pow((m[4][1] - m[0][1]), 2));
                //printf("%f\n", d4);
		// a,b,c,e,d,a = a4
		// a - b
		a = sqrt(pow((m[0][0] - m[1][0]), 2) + pow((m[0][1] - m[1][1]), 2));
		// b - c
		a1 =
			a + sqrt(pow((m[1][0] - m[2][0]), 2) + pow((m[1][1] - m[2][1]), 2));
		// c - e
		a2 = a1 +
			sqrt(pow((m[2][0] - m[4][0]), 2) + pow((m[2][1] - m[4][1]), 2));
		// e - d
		a3 = a2 +
			sqrt(pow((m[3][0] - m[4][0]), 2) + pow((m[3][1] - m[4][1]), 2));
		// d-a
		a4 = a3 +
			sqrt(pow((m[3][0] - m[0][0]), 2) + pow((m[3][1] - m[0][1]), 2));
		//printf("%f\n", a4);
		// a,b,d,e,c,a = b4
		// a - b
		b = sqrt(pow((m[0][0] - m[1][0]), 2) + pow((m[0][1] - m[1][1]), 2));
		// b - d
		b1 =
			b + sqrt(pow((m[1][0] - m[3][0]), 2) + pow((m[1][1] - m[3][1]), 2));
		// d - e
		b2 = b1 +
			sqrt(pow((m[4][0] - m[3][0]), 2) + pow((m[4][1] - m[3][1]), 2));
		// e - c
		b3 = b2 +
			sqrt(pow((m[4][0] - m[2][0]), 2) + pow((m[4][1] - m[2][1]), 2));
		// c - a
		b4 = b3 +
			sqrt(pow((m[2][0] - m[0][0]), 2) + pow((m[2][1] - m[0][1]), 2));
		//printf("%f\n", b4);
		// a,b,e,d,c,a = c4
		// a - b
		c = sqrt(pow((m[0][0] - m[1][0]), 2) + pow((m[0][1] - m[1][1]), 2));
		// b - e
		c1 =
			c + sqrt(pow((m[1][0] - m[4][0]), 2) + pow((m[1][1] - m[4][1]), 2));
		// e - d
		c2 = c1 +
			sqrt(pow((m[3][0] - m[4][0]), 2) + pow((m[3][1] - m[4][1]), 2));
		// d - c
		c3 = c2 +
			sqrt(pow((m[2][0] - m[3][0]), 2) + pow((m[2][1] - m[3][1]), 2));
		// c - a
		c4 = c3 +
			sqrt(pow((m[2][0] - m[0][0]), 2) + pow((m[2][1] - m[0][1]), 2));
		//printf("%f\n", c4);
		// a,c,b,d,e,a = e4
		// a - c
		e = sqrt(pow((m[2][0] - m[0][0]), 2) + pow((m[2][1] - m[0][1]), 2));
		// c - b 
		e1 = e + sqrt(pow((m[1][0] - m[2][0]), 2) + pow((m[1][1] - m[2][1]), 2));
		// b - d 
		e2 = e1 + sqrt(pow((m[1][0] - m[3][0]), 2) + pow((m[1][1] - m[3][1]), 2));
		// d - e 
		e3 = e2 + sqrt(pow((m[4][0] - m[3][0]), 2) + pow((m[4][1] - m[3][1]), 2));
		//e - a 
		e4 = e3 + sqrt(pow((m[4][0] - m[0][0]), 2) + pow((m[4][1] - m[0][1]), 2));
		//printf("%f\n", e4);
		
		//a,c,b,e,d,a = h4
    // a - c 
    h = sqrt(pow((m[2][0] - m[0][0]), 2) + pow((m[2][1] - m[0][1]), 2));
    // c - b 
    h1 = h + sqrt(pow((m[1][0] - m[2][0]), 2) + pow((m[1][1] - m[2][1]), 2));
    // b - e 
    h2 = h1 + sqrt(pow((m[1][0] - m[4][0]), 2) + pow((m[1][1] - m[4][1]), 2));
    // e - d 
    h3 = h2 + sqrt(pow((m[4][0] - m[3][0]), 2) + pow((m[4][1] - m[3][1]), 2));
    //d - a 
    h4 = h3 + sqrt(pow((m[3][0] - m[0][0]), 2) + pow((m[3][1] - m[0][1]), 2));
    		//printf("%f\n", h4);
    //a,c,d,b,e,a = j4
    // a - c 
    j = sqrt(pow((m[2][0] - m[0][0]), 2) + pow((m[2][1] - m[0][1]), 2));
    //c - d 
    j1 = j + sqrt(pow((m[2][0] - m[3][0]), 2) + pow((m[2][1] - m[3][1]), 2));
    //d - b 
    j2 = j1 + sqrt(pow((m[1][0] - m[3][0]), 2) + pow((m[1][1] - m[3][1]), 2));
    //b - e 
    j3 = j2 + sqrt(pow((m[1][0] - m[4][0]), 2) + pow((m[1][1] - m[4][1]), 2));
    //e - a 
    j4 = j3 + sqrt(pow((m[4][0] - m[0][0]), 2) + pow((m[4][1] - m[0][1]), 2));
    		//printf("%f\n", j4);
    //a,c,e,b,d,a = k4
    //a - c 
    k = sqrt(pow((m[2][0] - m[0][0]), 2) + pow((m[2][1] - m[0][1]), 2));
    //c - e 
    k1 = k + sqrt(pow((m[2][0] - m[4][0]), 2) + pow((m[2][1] - m[4][1]), 2));
    //e - b 
    k2 = k1 + sqrt(pow((m[1][0] - m[4][0]), 2) + pow((m[1][1] - m[4][1]), 2));
    //b - d 
    k3 = k2 + sqrt(pow((m[1][0] - m[3][0]), 2) + pow((m[1][1] - m[3][1]), 2));
    //d - a 
    k4 = k3 + sqrt(pow((m[3][0] - m[0][0]), 2) + pow((m[3][1] - m[0][1]), 2));
    		//printf("%f\n", k4);
    //a,d,b,c,e,a = l4
    //a - d 
    l = sqrt(pow((m[3][0] - m[0][0]), 2) + pow((m[3][1] - m[0][1]), 2));
    // d - b 
    l1 = l + sqrt(pow((m[1][0] - m[3][0]), 2) + pow((m[1][1] - m[3][1]), 2));
    // b - c 
    l2 = l1 + sqrt(pow((m[1][0] - m[2][0]), 2) + pow((m[1][1] - m[2][1]), 2));
    //c - e 
    l3 = l2 + sqrt(pow((m[2][0] - m[4][0]), 2) + pow((m[2][1] - m[4][1]), 2));
    //e - a 
    l4 = l3 + sqrt(pow((m[4][0] - m[0][0]), 2) + pow((m[4][1] - m[0][1]), 2));
    		//printf("%f\n", l4);
    //a,d,c,b,e,a = n4
    //a - d 
    n = sqrt(pow((m[3][0] - m[0][0]), 2) + pow((m[3][1] - m[0][1]), 2));
    //d - c 
    n1 = n + sqrt(pow((m[2][0] - m[3][0]), 2) + pow((m[2][1] - m[3][1]), 2));
    //c - b 
    n2 = n1 + sqrt(pow((m[1][0] - m[2][0]), 2) + pow((m[1][1] - m[2][1]), 2));
    //b - e 
    n3 = n2 + sqrt(pow((m[1][0] - m[4][0]), 2) + pow((m[1][1] - m[4][1]), 2));
    //e - a 
    n4 = n3 + sqrt(pow((m[4][0] - m[0][0]), 2) + pow((m[4][1] - m[0][1]), 2));

		//printf("%f\n", n4);
    
    //a,d,e,c,b,a = p4
    //a - d 
    p = sqrt(pow((m[3][0] - m[0][0]), 2) + pow((m[3][1] - m[0][1]), 2));
    //d - e 
    p1 = p + sqrt(pow((m[4][0] - m[3][0]), 2) + pow((m[4][1] - m[3][1]), 2));
    //e - c 
    p2 = p1 + sqrt(pow((m[2][0] - m[4][0]), 2) + pow((m[2][1] - m[4][1]), 2));
    //c - b 
    p3 = p2 + sqrt(pow((m[1][0] - m[2][0]), 2) + pow((m[1][1] - m[2][1]), 2));
    //b - a 
    p4 = p3 +  sqrt(pow((m[0][0] - m[1][0]), 2) + pow((m[0][1] - m[1][1]), 2));
    		//printf("%f\n", p4);
    //a,e,d,c,b,a = q4 
    //a - e
    q = sqrt(pow((m[4][0] - m[0][0]), 2) + pow((m[4][1] - m[0][1]), 2));
    //e - d 
    q1 = q + sqrt(pow((m[3][0] - m[4][0]), 2) + pow((m[3][1] - m[4][1]), 2));
    //d - c 
    q2 = q1 + sqrt(pow((m[2][0] - m[3][0]), 2) + pow((m[2][1] - m[3][1]), 2));
    //c - b 
    q3 = q2 + sqrt(pow((m[1][0] - m[2][0]), 2) + pow((m[1][1] - m[2][1]), 2));
    //b - a 
    q4 = q3 + sqrt(pow((m[0][0] - m[1][0]), 2) + pow((m[0][1] - m[1][1]), 2));
    		//printf("%f\n", q4);
    // ordenando 
	float vetor1[] = {d4,a4,b4,c4,e4,h4,j4,k4,l4,n4,p4,q4};
		for (i = 0; i < 11; i++) {
			if (i == 0)
				dis = vetor1[0];
			if (vetor1[i] < dis)
				dis = vetor1[i]; }
    
		printf("Distancia a ser percorrida: %.2f\n", dis);
		return 0;
	}

	/*for (i = 0; i < numCidade + 1; i++) {
		for (j = 0; j < 2; j++) {
			printf("%0.2f ", m[i][j]);
		}
			printf("\n"); }
			*/
	return 0;
}
