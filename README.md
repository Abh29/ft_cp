# bbcp

BBCP (1)

NetBSD General Commands Manual

BBCP (1)

**NAME**

**bbcp** — bare-bones copy a ﬁle

**SYNOPSIS**

**bbcp** *source target*

**DESCRIPTION**

The **bbcp** utility copies the contents of the *source*to *target*.

If *target*is a directory, **bbcp** will copy *source*into this directory.

**EXAMPLES**

The following examples show common usage:

bbcp file1 file2

bbcp file1 dir

bbcp file1 dir/file2

bbcp file1 dir/subdir/subsubdir/file2

**EXIT STATUS**

**bbcp** exits 0 on success, and >0 if an error occurred.

**SEE ALSO**

bbcpm(1), lseek(2), read(2), write(2)

**NOTES**

The code for the **bbcp** utility is, of course, well-formatted according to the guidelines found at

*https://stevens.netmeister.org/631/style*. The program can be compiled using the

*-Wall*and *-Werror*ﬂags without any errors or warnings on a NetBSD 9.x system.

**HISTORY**

The **bbcp** program was ﬁrst assigned as the ﬁrst programming assignment for the class CS765 “Advanced

Programming in the UNIX Environment” at Stevens Institute of Technology at least since around 2005.

**BUGS**

Well, let’s see...

BBCP

September 14, 2020
