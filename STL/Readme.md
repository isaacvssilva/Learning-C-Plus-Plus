# Resumo contêineres

## Estruturas de dados contêiner

### São divididas em três categorias: Sequência, associativos e adaptadores de container

* **Sequência:** mantêm a ordem dos elementos inseridos que forem especificados. - São organizados de forma contínua.

  * vector
    * > Os elementos são contínuo na mémoria.

  * list
    * > Cada elemento é um bloco de memória separado.
  > _Se o objetivo for inserir/remover do meio, a **List** é ideal para isso. Se o objetivo for percorrer mais rápido, o **Vector** é melhor._

* **Associativos:** os elementos são inseridos em uma ordem predefinida, exemplo: organizar em ordem crescente.

  * **Formato Three:**
    * map
      * > Forma de chave valor ordenado (únicas)
    * set
      * > chaves ordenados (únicas)

  * **Formato Hash: Estrutura de chave-valor**
    * hash-table [ 0 ... 99 ]
      * função hash faz operações matemáticas, exemplo: (187 mod 100), dentro das informações e leva para o destino final do pacote.
      * **Diferenças:**
        * busca binaria -> elementos devem está ordenado.
        * hash -> não obriga que os elementos estejam ordenados.

      * **Quando usar:**
        > _Se o objetivo for pegar uma entidade e saber se está ou não na estrutura o ideal vai ser utilizar a tabela hash_.
        >
        > > _Desvantagem: Consumo de memória._

    * unordered-map
      * > Versão não ordenada de map.
    * unordered-set
      * > Versão não ordenada de set.

* **Adaptadores de container:** são interfaces criadas limitando a funcionalidade em um contêiner preexistente e fornecendo um conjunto diferente de funcionalidades. Ao declarar os adaptadores de contêiner, você tem a opção de especificar quais contêineres de sequência formam o contêiner subjacente.

  * queue
    * > segue a semântica de FIFO. O primeiro elemento enviado por push – ou seja, inserido na fila – é o primeiro a ser removido como o mais recente da pilha – ou seja, removido da fila.
  * stack
    * > segue a semântica de LIFO. O último elemento enviado por push para a pilha é o primeiro elemento a ser removido da pilha como o mais recente.
