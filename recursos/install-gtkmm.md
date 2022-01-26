# Instalar GTKMM em Ubuntu 20.04

> sudo apt update

> sudo apt install libgtkmm-3.0-dev

## Configurando Visual Studio Code

* Atualizar o IncludePatch em:
  * arquivo c_cpp_properties.json:
  
```json
{
"configurations": [
    {
        "name": "Linux",
        "includePath": [
            "/usr/**"
        ],
        "defines": [],
        "compilerPath": "/usr/bin/gcc",
        "cStandard": "gnu17",
        "cppStandard": "gnu++14",
        "intelliSenseMode": "linux-gcc-x64"
    }
],
"version": 4 
}
```

* Ou em Configurações do IntelliSense:

   > <http://prnt.sc/26jnhnv>
