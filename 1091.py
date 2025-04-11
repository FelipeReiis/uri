while True:
  casosTeste = int(input())
  if(casosTeste == 0):
      break
  pontoDivisor =  [ int(v) for v in input().split()]
  for i in range(casosTeste):
    coordCasa =  [ int(v) for v in input().split()]
    if(coordCasa[0] ==  pontoDivisor[0] or coordCasa[1] ==  pontoDivisor[1]):
      print('divisa')
    elif(coordCasa[0] < pontoDivisor[0] and coordCasa[1] > pontoDivisor[1] ):
      print('NO')  
    elif(coordCasa[0] > pontoDivisor[0] and coordCasa[1] > pontoDivisor[1] ):
      print('NE')  
    elif(coordCasa[0] > pontoDivisor[0] and coordCasa[1] < pontoDivisor[1] ):
      print('SE')
    elif (coordCasa[0] < pontoDivisor[0] and coordCasa[1] < pontoDivisor[1] ):
      print('SO')
      