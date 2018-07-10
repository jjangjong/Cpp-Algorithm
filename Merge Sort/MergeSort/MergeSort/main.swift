//
//  main.swift
//  MergeSort
//
//  Created by moonhohyeon on 7/9/18.
//  Copyright © 2018 macker. All rights reserved.
//

import Foundation

var list = [Int]()
var number = 0

func makeList()
{
    if let inputNumber = readLine()
    {
        if var intNumber = Int(inputNumber)
        {
            if intNumber >= 1 && intNumber <= 1000000
            {
                number = intNumber
                
                while intNumber > 0
                {
                    if let inputElement = readLine()
                    {
                        if let intElement = Int(inputElement)
                        {
                            list.append(intElement)
                        }
                    }
                    
                    intNumber = intNumber - 1
                }
            }
        }
        else
        {
            print("no input")
        }
    }
}

func mergeSort(array: [Int], left: Int, right: Int)
{
    var mid: Int;
    
    if left < right
    {
        mid = (left + right) / 2
        mergeSort(array: list, left: left, right: mid)
        mergeSort(array: list, left: mid+1, right: right)
        merge(array: list, left: left, mid: mid, right: right)
    }
}

func merge(array: [Int], left: Int, mid: Int, right: Int)
{
    var a: Int, b: Int, c: Int
    
    a = left
    b = mid + 1
    c = left
    
    var tempList = Array(repeating: 0, count: number)
    
    while a <= mid && b <= right
    {
        if array[a] < array[b]
        {
            tempList[c] = array[a]
            a = a + 1
        } else
        {
            tempList[c] = array[b]
            b = b + 1
        }
        
        c = c + 1
    }
    
    if a > mid
    {
        for element in b...right
        {
            tempList[c] = array[element]
            c = c + 1
        }
    } else
    {
        for element in a...mid
        {
            tempList[c] = array[element]
            c = c + 1
        }
    }
    
    for element in left...right
    {
        list[element] = tempList[element]
    }
}

func printList()
{
    for element in 0..<number
    {
        print(list[element])
    }
}

makeList()
mergeSort(array: list, left: 0, right: number - 1)
printList()
