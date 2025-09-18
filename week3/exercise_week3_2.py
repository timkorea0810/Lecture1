class A:
    def hello(self):
        print("Hello from A")
class B(A):
    def hello(self):
        print("Hello from B")
        super().hello()
class C(A):
    def hello(self):
        print("Hello from C")
        super().hello()
class D(B, C):
    def hello(self):
        print("Hello from D")
        super().hello()
class E(C):
    pass
class F(B, E):
    pass
f=F()
f.hello()
print(F.mro()) # first F, left B, right E, C (parent of E), A (common ancestor)
try:
    class Z(A, D):
        pass
except TypeError:
    print("bad mro")