# Stack

It's kinda logic that an array is nice to store data with. But there are different ways for handling an array. One of the options is the abstraction "Stack". 
## Summary

1. [Introduction](#Introduction)
2. [Contributing](#Contributing)
## Introduction

Basically, the Stack has two functionalities. You can push something to the "Stack" and you can pop the last element from the "Stack". So you can imagine its like a stack/pile of wood. In this abstraction you can only push on top of the "Stack/Pile". Otherwise, you only have the chance to remove the item at the top if you don't want to destroy your stack/pile. That makes sense if you remember that your storage on your pc is organiced in cells. Your Stack is a fixed range of cells inside this storage. The "Stack" is some kinda stupid data structure because he needs a (Stack-)counter which knows the current last index of the "Stack". That is really important to know because it's not relevant for the "Stack" that a cell is empty to use it for new pushes. It is only important that the counter points to a cell in the fixed range of the "Stack" so that counter +1 is the new index of the to-push element.

## Contributing

Creating a pull request is great for all interested people. So be nice and make a pull request to this repository!
