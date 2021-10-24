# a program to implement breadth first search algorithm
from queue import Queue
import queue
adj_list={"A":['B','D'],
          "B":['A','C'],
          "C":['B'],
          "D":['A','E','F'],
          "E":['D','F','G'],
          "F":['D','E','F'],
          "G":['E','H'],
          "H":['F','G']
}
#bfa code
visited={}
level={} 
parent={}
bfs_traversal_output=[]
queue=Queue()
for node in adj_list.keys():
    visited[node]=False
    parent[node]=None
    level[node]=-1

print(visited)
print(parent)
print(level)
