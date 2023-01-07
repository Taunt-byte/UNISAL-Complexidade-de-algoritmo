class Node:
  def __init__(self, data=None):
    self.data = data
    self.next = None

class LinkedList:
  def __init__(self):
    self.head = None
    self.size = 0

  def insert_at_front(self, data):
    new_node = Node(data)
    new_node.next = self.head
    self.head = new_node
    self.size += 1

  def insert_at_end(self, data):
    new_node = Node(data)
    if self.head is None:
      self.head = new_node
    else:
      curr = self.head
      while curr.next is not None:
        curr = curr.next
      curr.next = new_node
    self.size += 1

  def remove_at_front(self):
    if self.head is None:
      return
    self.head = self.head.next
    self.size -= 1

  def remove_at_end(self):
    if self.head is None:
      return
    if self.head.next is None:
      self.head = None
      self.size -= 1
    else:
      curr = self.head
      while curr.next.next is not None:
        curr = curr.next
      curr.next = None
      self.size -= 1
