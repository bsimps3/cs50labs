import check50
import check50.c

@check50.check()
def exists():
    """while.c exists."""
    check50.exists("while.c")
    

@check50.check(exists)
def compiles():
    """while.c compiles."""
    check50.c.compile("while.c", lcs50=True)
    
@check50.check(compiles)
def worksWith2():
    """test with 2 as input, checks for correct output"""
    check50.run("./while").stdin("2").stdout("Your number can be doubled 6 times before reaching 100!").exit(0)
    
@check50.check(compiles)
def worksWith4():
    """testing inputs, checks for correct output"""
    check50.run("./while").stdin("4").stdout("Your number can be doubled 4 times before reaching 100!").exit(0)
    
@check50.check(compiles)
def worksWith20():
    """testing inputs, checks for correct output"""
    check50.run("./while").stdin("20").stdout("Your number can be doubled 2 times before reaching 100!").exit(0)



