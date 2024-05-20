# Chapter 2

In this Chapter, I get my hands on the code.

I installed Mono using the following process.

```sh
sudo gpg --homedir /tmp --no-default-keyring --keyring /usr/share/keyrings/mono-official-archive-keyring.gpg --keyserver hkp://keyserver.ubuntu.com:80 --recv-keys 3FA7E0328081BFF6A14DA29AA6A19B38D3D831EF
echo "deb [signed-by=/usr/share/keyrings/mono-official-archive-keyring.gpg] https://download.mono-project.com/repo/ubuntu stable-focal main" | sudo tee /etc/apt/sources.list.d/mono-official-stable.list
sudo apt update
sudo apt install mono-devel
```

After that I could compile the example code from the book using:

```sh
mono-csc -target:exe TestApp.cs
```

And for multiple source code file:

```sh
mono-csc -r:System.Windows.Forms.dll TestApp.cs HelloMessage.cs
```

We can also use a response file instead of adding the parameters in the command line.

Here is the content of the `TestApp.rsp` file:
```rsp
/r:System.Windows.Forms.dll
/target:exe /out:TestApp.exe *.cs
```
