# Interconnecting-Sets

This is an Xcode project used to solve Zero Judge TW problem d909. 

https://zerojudge.tw/ShowProblem?problemid=d909

Input format: N, M
              a, b, c
              ...
              a, b, c
              where N = number of objects, M = number of connections amongst the objects,
              a = the ith object, b = jth object, c = cost of connection

Output: lowest cost to connect all N objects

Example input (5 objects, 10 connections):
  5 10
  0 2 20 (Explanation: The cost of connecting object 0 to object 2 is 20)
  2 4 31
  4 1 38
  1 3 23
  3 0 6
  0 4 22
  3 2 8
  1 2 4
  3 4 1
  1 0 8

Example output:
  19 (Lowest cost to connect all 5 objects)
