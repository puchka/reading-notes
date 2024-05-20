# Chapter 1

```
|------------------------------------------------------------------------------------------------|
|                                  The base class libraries                                      |
|------------------------------------------------------------------------------------------------|
|                    | Database access | Desktop GUI APIs | Security | Remoting APIs             |
|          Threading |       File I/O  |    Web APIs      | (et al.)                             |
--------------------------------------------------------------------------------------------------

-------------------------------------------
|        The common language runtime      |
|    -------------------------------------|
|   |        Common Type System           |
|   |                                     |
|   |   --------------------------------  |
|   |   | Common Language Specification | |
|   |   --------------------------------  |
-------------------------------------------
```

```
--------------------------     -----------------------
|     C# source code     | ->  |      C# Compiler    | \
--------------------------     -----------------------  v
--------------------------     -----------------------    -------------------
| Perl .NET source code  | ->  | Perl .NET Compiler  | -> |       IL        |
--------------------------     -----------------------    |       and       |
--------------------------     ----------------------     |   Metadata      |
| COBOL .NET source code | ->  | COBOL .NET Compiler | -> | (*.dll or *.exe)|
--------------------------     - ---------------------    -------------------
--------------------------     -----------------------  ^
|  C++/CLI source code   | ->  | C++/CLI Compiler    | /
--------------------------     -----------------------
```

```
-------------------------
| Your .NET Source Code |             ------------
| From some .NET aware  | ----------> | Some .NET|
| language              |             | Compiler |
-------------------------             ------------
                                           |
                                           v
                               ---------------------------------
                               |   *.dll or *.exe              |
                               |      Assembly                 |
                               | (CIL, Metadata, and Manifest) |
                               ---------------------------------
                                              |
                                              |
    --------------------------------       ---v---------------------------------
    | Base class libraries         |      |  .NET execution engine (mscoree.dll)
    | (mscorelib.dll and so forth) |-------->Class loader
    --------------------------------      |
                                          |  Jitter
                                          |
                                          |  Platform-specific
                                          |  Intructions
                                          |
                                          |  Execute members
```

Your goal as a .NET developer is to get to know the types defined in the numerous .NET namespaces.
