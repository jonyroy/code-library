
def buildConnectionString(params):
    """adkf asdflakdsf asdlkfadsfkdsf
  sdlfakdlfadlfadlfadlfasdfdsf
    dflsadfsdlf"""
   
    return ":".join(["%s=%s" % (i,j) for i,j in params.items()])
if __name__=="__main__":
    myParams={"dsf":"wwwww","eeee":"ttttt","yyyy":"ccccc"}
    print buildConnectionString(myParams)
