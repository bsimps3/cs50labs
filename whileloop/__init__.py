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



