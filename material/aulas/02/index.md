# 02

# Inicio da Aula 2

Vamos iniciar a aula pensando em custos e a problematica de esqueceer recursos alocados.

Como visto na apresentaćao da aula 1, a computacao em nuvem nos dá a possibilidade de utilizar recursos, ferramentas e softwares de ultima geracão, pagando somente pela alocacão destes recursos, porem devemos lembrar de apagar estes recursos quando não estamos mais utilizando (se não o proposito é perdido). 


## Verificar Custos e Créditos

Então iremos ver nosso "crédito" e criar um alarme para não sermos surpriendidos com gastos futuros.

Vamos utilizar as etapas abaixo:

* Pesquisar ---->>>>   Cost Management + Billing
* Biling profile
* Create budget


## All Services

Vamos dar uma caminhada pelos servicos agora.

* Pesquisar ---->>>>   All services

Na aba lateral temos os grupos de servicos que a Azure nos fornece.

Entre em cada uma das abas e verifique os nomes dos servicos.


# Documentacao Microsoft

É possivel aprender muito com a documentacao oficial da própria Microsoft.

A Documentacão é bem completa e possui diversos exemplos e tutoriais.

[Link-da-documentacao](https://docs.microsoft.com/pt-br/)



# Instalar a CLI do Azure

## Seguir os passos da documentacao...

[CLI-do Azure](https://docs.microsoft.com/pt-br/cli/azure/install-azure-cli)


## Using Azure PowerShell in Docker

We are publishing Docker images with Azure PowerShell preinstalled. This article shows you how to
get started using Azure PowerShell in the Docker container.

### Finding available images

The released images require Docker 17.05 or newer. It is also expected that you are able to run
Docker without `sudo` or local administrative rights. Please follow Docker's official
[instructions][install] to install `docker` correctly.

The latest container image contains the latest version of PowerShell and the latest Azure PowerShell
modules supported with the Az module.

For each new release of the Az module we are releasing an image for the following operating systems:

- Ubuntu 18.04 (default)
- Debian 9
- CentOS 7

A full list of available images can be found on our [Docker image][az image] page.

### Using Azure PowerShell in a container

The following steps show the Docker commands required to download the image and start an interactive
PowerShell session.

1. Download the latest azure-powershell image.

   ```console
   docker pull mcr.microsoft.com/azure-powershell
   ```

1. Run the azure-powershell container in interactive mode:

   ```console
   docker run -it mcr.microsoft.com/azure-powershell pwsh
   ```

For Windows Docker hosts, you must enable Docker file sharing to allow local drives on Windows to be
shared with Linux containers. For more information see
[Get started with Docker for Windows][file-sharing].

### Remove the image when no longer needed

The following command is used to delete the Docker container when you no longer need it.

```console
docker rmi mcr.microsoft.com/azure-powershell
```

-------------------------------------------------------------------------------------------------------------------------
-------------------------------------------------------------------------------------------------------------------------


# Criar uma Instancia com o CLI da Azure

Vamos utilizar a ferramenta Cli atrelado ao Web Browser, fica mais rapido para demonstrar, porem para utilizacao, recomendo instalar a CLI na maquina de trabalho.

Este link leva direto para um Container com as configuracoes ja feitas e as ferramentas já instaladas.
[Cloud-shell](https://portal.azure.com/#cloudshell/)

Antes de abrir irá perguntar BASH ou PowerShell..... escolher BASH

[Documentacao-quick-start](https://docs.microsoft.com/pt-br/azure/cloud-shell/quickstart#code-try-0)


```console
az account list
az account set --subscription 'Azure for Students'
az group create --location eastasia --name MyRG
az vm create -n myVM -g MyRG --image UbuntuLTS --generate-ssh-keys
```

Vamos até o Portal da AZure e verificar que o Resorce Group foi criado e a Instancia está sendo iniciada.
Aguardar a maquina ficar Ready.

Vamos conectar nela agora... VIA SSH (seguir o LINK da documentacao)


# Quickstart: Deploy a Python Flask web app to Azure App Service



## 1 - Sample application

This quickstart can be completed using either Flask or Django. A sample application in each framework is provided to help you follow along with this quickstart. Download or clone the sample application to your local workstation.

### [Flask]

```
sudo apt update

sudo apt install python3-dev

sudo apt install python3-venv

git clone https://github.com/Azure-Samples/msdocs-python-flask-webapp-quickstart

python3 -m venv .venv

source .venv/bin/activate

```


---

To run the application locally:

### [Flask]

1. Go to the application folder:

    ```Console
    cd msdocs-python-flask-webapp-quickstart
    ```

1. Install the dependencies:

    ```Console
    pip install -r requirements.txt
    ```

1. Run the app:

    ```Console
    flask run --host=0.0.0.0 --port=8080
    ```

1. Browse to the sample application at `http://IP-publico-da-instancia:8080` in a web browser.


### Tente acessar ..... não funciona ainda neh....
### Falta liberar o Security Group para esta Maquina.
### Vamos voltar ao Portal e liberar o acesso, nas regras do grupo de seguranca.



# Depois de acessar e ver que funciona.


# Destruir o que criamos

```console
az group delete -n MyRG
```
