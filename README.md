# lp-solve

O trabalho consiste em modelar e implementar, por programação linear, uma solução para o problema de transporte de produção.

Problema:

Uma empresa (que produz um determinado produto) tem um fábricas (indexadas de
1 a m), cada uma delas com capacidade de produção dada (a fabrica i tem
capacidade ci - em toneladas). A empresa deve suprir a demanda de n cidades da
região (indexadas de 1 a n), sendo que a cidade j tem demanda de dj toneladas do
produto. Os custos de transporte são dados em reais por tonelada, ou seja, para
cada par fábrica i e cidade j, temos o custo de ti,j reais / tonelada. O diretor da
empresa precisa determinar quanto cada fábrica envia para cada cidade. Para
resolver este problema, você deve considerar as seguintes informações:
● O transporte do produto não pode ser aproveitado entre fábricas nem entre
cidades, ou seja, cada carga de uma fábrica para uma cidade e independente
das demais cargas;
● O custo do transporte é linear no peso da carga, ou seja, se a carga
transportada da fábrica i para a cidade j e de k toneladas, o custo e de k × ti,j
