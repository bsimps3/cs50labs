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
    """takes 2 as input, checks for correct output"""
    check50.run("./while").stdin("2").stdout("Your number can be doubled 6 times before reaching 100!").exit(0)



