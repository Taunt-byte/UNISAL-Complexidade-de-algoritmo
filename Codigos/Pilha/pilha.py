class Stack:
    def __init__(self):
        self.items = []
    
    def is_empty(self):
        return not self.items
    
    def push(self, item):
        self.items.append(item)
    
    def pop(self):
        return self.items.pop()
    
    def peek(self):
        return self.items[-1]
    
    def size(self):
        return len(self.items)

# Exemplo de uso
stack = Stack()

print(stack.is_empty()) # True

stack.push(10)
stack.push(20)
stack.push(30)

print(stack.peek()) # 30
print(stack.pop()) # 30
print(stack.pop()) # 20
print(stack.size()) # 1
