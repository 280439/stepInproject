# Requirements
## Introduction
 * There are a wide range of sorts of Resistor accessible which can be utilized in both electrical and electronic circuits to control the progression of flow or to deliver a voltage drop from multiple points of view. But in order to perform the work, resistor needs to have some type of "resistive" or "obstruction" values. Resistors are available in wide range of values which are used as per requirements.
 * The resistance value, tolerance, and wattage rating are printed in a number or letters on the large size of resistor having high values but in small size of resistor the resistance value, tolerance, and wattage rating are printed in a form of colour band which is called Resistance colour band.
 This project is based on C programming concepts which is perfectly assembled to find the exact value of resistor in Ohms by using resistor colour code.


## Research
* Resistance colour code calculator is a software program used to find the resistance value of the resistor. The entire format of the software is built on C programming language. This main agenda of this software is to find the resistance value of the resistor by using colour code bands. It refers to a number of efficient automated systems designed for calculating the resistance value.

## Cost and Features

 |      Memory Cost       |  Features |
 |---                      |---       |
 | 0000000000000000T      | "searchthecolour" Here, search function is used to search the colour pattern in the given resistor
 | 0000000000000054T      | "seperatehigherorder" Here, seperate function is used to seperate the high order resistance value
 | 0000000000000000T      | "comparethestrings" Here, compare function is used to compare the band colours
 
## Defining Our System
* Resistor colour code calculator is based on some standards of resistor colour code like BLACK BROWN RED ORANGE YELLOW GREEN BLUE VIOLET GREY WHITE GOLD SILVER. This makes user to follow the standard to get the correct output. 
* Each colour having it's own multiplier and the output contains resistance value in ohms with tolerance value in percentage.

## Benifits 
* Time saving : This software help users to save their time by getting the output in just few seconds.

* Accuracy : It gives the accurate value of resistance and tolerance as per the user input values.

## Basic Work Flow

![BasicWorkflow](https://github.com/280439/stepInproject/blob/master/1_Requirements/Flow.png)
## SWOT ANALYSIS
![SWOT Analysis](https://github.com/280439/stepInproject/blob/master/1_Requirements/SWOT.png)

# 4W&#39;s and 1&#39;H
## Who:

* Person involved in circuit related projects and daily basis circuit problems.

## What:

* While making the large electronic circuits, it is nessesary to use required value of resistor but it becomes a tedious and time consuming task to find the resistance of any random resistor.

## When:

* Always while using the resistor in the electronic circuits.

## Where:

* This problem is always expected in resistor based electronic circuits.

## How:

* This issue may cause the error in the electronic circuits and hence there can be huge wastage of time and it may also cause problem in other components attached in the circuit.

# Detail requirements
## High Level Requirements:

| ID | Description | Category | Status (Implemented/Future) |
|--- |--- |--- |--- |
|HR01|User shall be able to provide colours | Technical | Implemented |
|HR02|User should enter valid colours | Technical | Implemented |
|HR03|User shall be able to use for another resistor band colours | Technical | Implemented |
|HR04 |User shall be able to change the band colours | Technical | Implemented |



##  Low level Requirements:

| ID | Description | HLR ID | Status (Implemented/Future) |
|--- |--- |--- |--- |
|LR01|Resistor band colours entered by the user should be in sequence order to get the correct resistance value and Tolerance limits|HR01| Implemented |
|LR02|Colour code should be valid as per standard colour code BLACK BROWN RED ORANGE YELLOW GREEN BLUE VIOLET GREY WHITE GOLD SILVER|HR02| Implemented |
