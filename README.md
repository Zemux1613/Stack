# Stack

It's kinda logic that an array is be nice to store data with. But to handle an array exists different ways. One of the ways are the abstraition "Stack". 

## Summary

1. [Introduction](Introduction)

## Introduction

The Stack have basically two functionalities. You can push something to the "Stack" and you can pop the last element from the "Stack". Least but not last were it called "Stack", so you can imagine its like a stack of wood. In this abstraition you can only push at the top of the "Stack". The other way round you only have the chance to remove the item at the top if you dosn't want destroy your stack. That made sense if you imagine your storage on your pc who's organiced in cells. Your Stack is an fixed range of cells into this storage. A "Stack" is kinda stupid data structure because he need an counter who know the current last element index of the "Stack". Thats really important to know because it's not relevant for the "Stack" that a cell is empthy to use them for new pushes. Its only important that the counter point to a cell in the fixed range of the "Stack" so that counter+1 the new index of the to push element is.

