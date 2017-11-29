#ifndef FUNCOES_H
#define FUNCOES_H

/**Esta funcao
   *imprime o menu
   *do programa.
*/
void menu();
/** Esta funcao
  *preenche a matriz A
  *com valores aleatórios.
  * nla e a variavel que guarda o numero de
  *linhas da matriz A.
  *nca e a variavel que guarda o numero de
  *colunas da matriz A.
*/
void op3(float ma[50][50], int nla, int nca);
/**Esta funcao
  *preenche a matriz B
  *com valores aleatórios.
  * nlb e a variavel que guarda o numero de
  *linhas da matriz B.
  *ncb e a variavel que guarda o numero de
  *colunas da matriz B.
*/
void op4(float mb[50][50], int nlb, int ncb);
/**Esta funcao
  *atribui valores manualmente
  *para os elementos da matriz A.
  * nla e a variavel que guarda o numero de
  *linhas da matriz A.
  *nca e a variavel que guarda o numero de
  *colunas da matriz A.
*/
void op5(float ma[50][50], int nla, int nca);
/**Esta funcao
  *atribui valores manualmente
  *para os elementos da matriz B.
  * nlb e a variavel que guarda o numero de
  *linhas da matriz B.
  *ncb e a variavel que guarda o numero de
  *colunas da matriz B.
*/
void op6(float mb[50][50],int nlb, int ncb);
/**Esta funcao realiza a operação soma de matrizes: A+B.
  *É preciso que todas elas tenham o mesmo número de linhas e de colunas.
  *O resultado é armazenado na matriz C.
*/
void op7(float ma[50][50], int nla, int nca, float mb[50][50], int nlb, int ncb,float mc[50][50]);
/**Esta funcao realiza a operação de subtração de matrizes: A-B.
  *É preciso que todas elas tenham o mesmo número de linhas e de colunas.
  *O resultado é armazenado na matriz C.
 */
void op8(float ma[50][50], int nla, int nca, float mb[50][50], int nlb, int ncb,float mc[50][50]);
/**Esta funcao realiza a operação multiplicação de matrizes: A*B.
 *O número de colunas da primeira matriz é igual ao número de linhas da segunda matriz.
 *O resultado é armazenado na matriz C.
 */
void op9(float ma[50][50], int nla, int nca, float mb[50][50], int nlb, int ncb,float mc[50][50]);
/** Esta funcao
  *imprimi matriz A.
  * nla e a variavel que guarda o numero de
  *linhas da matriz A.
  *nca e a variavel que guarda o numero de
  *colunas da matriz A.
*/
void op10(float ma[50][50], int nla, int nca);
/** Esta funcao
  *imprimi matriz B.
  * nlb e a variavel que guarda o numero de
  *linhas da matriz B.
  *ncb e a variavel que guarda o numero de
  *colunas da matriz B.
*/
void op11(float mb[50][50], int nlb, int ncb);
/** Esta funcao imprimi matriz C.
   *Esta matriz recebe os valores que resultaram das operações de soma, subtração ou multiplicação das matrizes A e B.
   *Ela imprimirá os valores da última operação realizada.
*/
void op12( float mc[50][50],int nla,int ncb);
/**Esta funcao
  *le a matriz A de um arquivo.
  * nla e a variavel que guarda o numero de
  *linhas da matriz A.
  *nca e a variavel que guarda o numero de
  *colunas da matriz a.
*/
void op13(float ma[50][50], int nla, int nca);
/**Esta funcao
  *le a matriz B de um arquivo.
  *nlb e a variavel que guarda o numero de
  *linhas da matriz B.
  *ncb e a variavel que guarda o numero de
  *colunas da matriz B.
*/
void op14 (float mb[50][50], int nlb, int ncb);
/**Esta funcao
  *salva a matriz C em um arquivo de texto.
*/
void op15(float mc[50][50],int nla,int ncb);

#endif // FUNCOES_H
