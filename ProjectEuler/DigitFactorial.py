fact={'0':1,'1':1,'2':2,'3':6,'4':24,'5':120,'6':720,'7':5040,'8':40320,'9':362880}
n=int(input())
print(sum(i for i in range(10,n) if not sum(map(lambda x: fact[x],str(i)))%i))
