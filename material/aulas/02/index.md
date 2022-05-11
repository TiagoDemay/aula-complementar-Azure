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


# Criar uma Instancia com o CLI da Azure

Vamos utilizar a ferramenta Cli atrelado ao Web Browser, fica mais rapido para demonstrar, porem para utilizacao, recomendo instalar a CLI na maquina de trabalho.

Este link leva direto para um Container com as configuracoes ja feitas e as ferramentas já instaladas.
[Cloud-shell](https://portal.azure.com/#cloudshell/)

Antes de abrir irá perguntar BASH ou PowerShell..... escolher BASH

[Documentacao-quick-start](https://docs.microsoft.com/pt-br/azure/cloud-shell/quickstart#code-try-0)


```console
az account list
az account set --subscription 'my-subscription-name'
az account set --subscription 'Azure for Students'
az group create --location westus --name MyRG
az vm create -n myVM -g MyRG --image UbuntuLTS --generate-ssh-keys
```

Vamos até o Portal da AZure e verificar que o Resorce Group foi criado e a Instancia está sendo iniciada.
Aguardar a maquina ficar Ready.

Vamos conectar nela agora... VIA SSH (seguir o LINK da documentacao)


# Quickstart: Deploy a Python Flask web app to Azure App Service



## 1 - Sample application

This quickstart can be completed using either Flask or Django. A sample application in each framework is provided to help you follow along with this quickstart. Download or clone the sample application to your local workstation.

### [Flask]

```Console

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

1. Create a virtual environment for the app:

    [!INCLUDE [Virtual environment setup](<./includes/quickstart-python/virtual-environment-setup.md>)]

1. Install the dependencies:

    ```Console
    pip install -r requirements.txt
    ```

1. Run the app:

    ```Console
    flask run --host=0.0.0.0 --port=8080
    ```

1. Browse to the sample application at `http://IP-publico-da-instancia:8080` in a web browser.

    :::image type="content" source="./media/quickstart-python/run-flask-app-localhost.png" alt-text="Screenshot of the Flask app running locally in a browser":::

Having issues? [Let us know](https://aka.ms/PythonAppServiceQuickstartFeedback).



### Tente acessar ..... não funciona ainda neh....
### Falta liberar o Security Group para esta Maquina.
### Vamos voltar ao Portal e liberar o acesso, nas regras do grupo de seguranca.



# Depois de acessar e ver que funciona.


# Destruir o que criamos

```console
az group delete -n MyRG
```





<!-- 


## 2 - Create a web app in Azure

To host your application in Azure, you need to create Azure App Service web app in Azure. You can create a web app using the [Azure portal](https://portal.azure.com/), [VS Code](https://code.visualstudio.com/) using the [Azure Tools extension pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.vscode-node-azure-pack), or the Azure CLI.

### [Azure portal](#tab/azure-portal)

Sign in to the [Azure portal](https://portal.azure.com/) and follow these steps to create your Azure App Service resources.

| Instructions    | Screenshot |
|:----------------|-----------:|
| [!INCLUDE [Create app service step 1](<./includes/quickstart-python/create-app-service-azure-portal-1.md>)] | :::image type="content" source="./media/quickstart-python/create-app-service-azure-portal-1-240px.png" alt-text="A screenshot of how to use the search box in the top tool bar to find App Services in Azure." lightbox="./media/quickstart-python/create-app-service-azure-portal-1.png"::: |
| [!INCLUDE [Create app service step 1](<./includes/quickstart-python/create-app-service-azure-portal-2.md>)] | :::image type="content" source="./media/quickstart-python/create-app-service-azure-portal-2-240px.png" alt-text="A screenshot of the location of the Create button on the App Services page in the Azure portal." lightbox="./media/quickstart-python/create-app-service-azure-portal-2.png"::: |
| [!INCLUDE [Create app service step 1](<./includes/quickstart-python/create-app-service-azure-portal-3.md>)] | :::image type="content" source="./media/quickstart-python/create-app-service-azure-portal-3-240px.png" alt-text="A screenshot of how to fill out the form to create a new App Service in the Azure portal." lightbox="./media/quickstart-python/create-app-service-azure-portal-3.png"::: |
| [!INCLUDE [Create app service step 1](<./includes/quickstart-python/create-app-service-azure-portal-4.md>)] | :::image type="content" source="./media/quickstart-python/create-app-service-azure-portal-4-240px.png" alt-text="A screenshot of how to select the basic app service plan in the Azure portal." lightbox="./media/quickstart-python/create-app-service-azure-portal-4.png"::: |
| [!INCLUDE [Create app service step 1](<./includes/quickstart-python/create-app-service-azure-portal-5.md>)] | :::image type="content" source="./media/quickstart-python/create-app-service-azure-portal-5-240px.png" alt-text="A screenshot of the location of the Review plus Create button in the Azure portal." lightbox="./media/quickstart-python/create-app-service-azure-portal-5.png"::: |

### [VS Code](#tab/vscode-aztools)

To create Azure resources in VS Code, you must have the [Azure Tools extension pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.vscode-node-azure-pack) installed and be signed into Azure from VS Code.

> [!div class="nextstepaction"]
> [Download Azure Tools extension pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.vscode-node-azure-pack)

| Instructions    | Screenshot |
|:----------------|-----------:|
| [!INCLUDE [Create app service step 1](<./includes/quickstart-python/create-app-service-visual-studio-code-1.md>)] | :::image type="content" source="./media/quickstart-python/create-app-service-visual-studio-code-1-240px.png" alt-text="A Screenshot of the Azure Tools icon in the left toolbar of VS Code." lightbox="./media/quickstart-python/create-app-service-visual-studio-code-1.png"::: |
| [!INCLUDE [Create app service step 2](<./includes/quickstart-python/create-app-service-visual-studio-code-2.md>)] | :::image type="content" source="./media/quickstart-python/create-app-service-visual-studio-code-2-240px.png" alt-text="A screenshot of the App Service section of Azure Tools extension and the context menu used to create a new web app." lightbox="./media/quickstart-python/create-app-service-visual-studio-code-2.png"::: |
| [!INCLUDE [Create app service step 4](<./includes/quickstart-python/create-app-service-visual-studio-code-3.md>)] | :::image type="content" source="./media/quickstart-python/create-app-service-visual-studio-code-3-240px.png" alt-text="A screenshot of dialog box used to enter the name of the new web app in Visual Studio Code." lightbox="./media/quickstart-python/create-app-service-visual-studio-code-3.png"::: |
| [!INCLUDE [Create app service step 5](<./includes/quickstart-python/create-app-service-visual-studio-code-4.md>)] | :::image type="content" source="./media/quickstart-python/create-app-service-visual-studio-code-4-240px.png" alt-text="A screenshot of the dialog box in VS Code used to select the runtime for the new web app." lightbox="./media/quickstart-python/create-app-service-visual-studio-code-4.png"::: |
| [!INCLUDE [Create app service step 6](<./includes/quickstart-python/create-app-service-visual-studio-code-5.md>)] | :::image type="content" source="./media/quickstart-python/create-app-service-visual-studio-code-5-240px.png" alt-text="A screenshot of the dialog in VS Code used to select the App Service plan for the new web app." lightbox="./media/quickstart-python/create-app-service-visual-studio-code-5.png"::: |

### [Azure CLI](#tab/azure-cli)

[!INCLUDE [Create CLI](<./includes/quickstart-python/create-app-cli.md>)]

---

Having issues? [Let us know](https://aka.ms/PythonAppServiceQuickstartFeedback).

## 3 - Deploy your application code to Azure

Azure App service supports multiple methods to deploy your application code to Azure including support for GitHub Actions and all major CI/CD tools. This article focuses on how to deploy your code from your local workstation to Azure.

### [Deploy using VS Code](#tab/vscode-deploy)

To deploy a web app from VS Code, you must have the [Azure Tools extension pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.vscode-node-azure-pack) installed and be signed into Azure from VS Code.

> [!div class="nextstepaction"]
> [Download Azure Tools extension pack](https://marketplace.visualstudio.com/items?itemName=ms-vscode.vscode-node-azure-pack)

| Instructions    | Screenshot |
|:----------------|-----------:|
| [!INCLUDE [VS Code deploy step 1](<./includes/quickstart-python/deploy-visual-studio-code-1.md>)] | :::image type="content" source="./media/quickstart-python/deploy-visual-studio-code-1-240px.png" alt-text="A screenshot of the location of the Azure Tools icon in the left toolbar of VS Code." lightbox="./media/quickstart-python/deploy-visual-studio-code-1.png"::: |
| [!INCLUDE [VS Code deploy step 2](<./includes/quickstart-python/deploy-visual-studio-code-2.md>)] | :::image type="content" source="./media/quickstart-python/deploy-visual-studio-code-2-240px.png" alt-text="A screenshot of the context menu of an App Service and the deploy to web app menu option." lightbox="./media/quickstart-python/deploy-visual-studio-code-2.png"::: |
| [!INCLUDE [VS Code deploy step 3](<./includes/quickstart-python/deploy-visual-studio-code-3.md>)] | :::image type="content" source="./media/quickstart-python/deploy-visual-studio-code-3-240px.png" alt-text="A screenshot dialog in VS Code used to choose the app to deploy." lightbox="./media/quickstart-python/deploy-visual-studio-code-3.png"::: |
| [!INCLUDE [VS Code deploy step 4](<./includes/quickstart-python/deploy-visual-studio-code-4.md>)] | :::image type="content" source="./media/quickstart-python/deploy-visual-studio-code-4-240px.png" alt-text="A screenshot of a dialog box in VS Code asking if you want to update your workspace to run build commands." lightbox="./media/quickstart-python/deploy-visual-studio-code-4.png"::: |
| [!INCLUDE [VS Code deploy step 5](<./includes/quickstart-python/deploy-visual-studio-code-5.md>)] | :::image type="content" source="./media/quickstart-python/deploy-visual-studio-code-5-240px.png" alt-text="A screenshot showing the confirmation dialog when the app code has been deployed to Azure." lightbox="./media/quickstart-python/deploy-visual-studio-code-5.png"::: |

### [Deploy using Azure CLI](#tab/azure-cli-deploy)

[!INCLUDE [Deploy Azure CLI](<./includes/quickstart-python/deploy-cli.md>)]

### [Deploy using Local Git](#tab/local-git-deploy)

[!INCLUDE [Deploy Local Git](<./includes/quickstart-python/deploy-local-git.md>)]

### [Deploy using a ZIP file](#tab/zip-deploy)

[!INCLUDE [Deploy using ZIP file](<./includes/quickstart-python/deploy-zip-file.md>)]

---

Having issues? Refer first to the [Troubleshooting guide](./configure-language-python.md#troubleshooting), otherwise, [let us know](https://aka.ms/PythonAppServiceQuickstartFeedback).

## 4 - Browse to the app

Browse to the deployed application in your web browser at the URL `http://<app-name>.azurewebsites.net`. If you see a default app page, wait a minute and refresh the browser.

The Python sample code is running a Linux container in App Service using a built-in image.

:::image type="content" source="./media/quickstart-python/run-app-azure.png" alt-text="Screenshot of the app running in Azure":::

**Congratulations!** You've deployed your Python app to App Service.

Having issues? Refer first to the [Troubleshooting guide](./configure-language-python.md#troubleshooting), otherwise, [let us know](https://aka.ms/PythonAppServiceQuickstartFeedback).

## 5 - Stream logs

Azure App Service captures all messages output to the console to assist you in diagnosing issues with your application. The sample apps include `print()` statements to demonstrate this capability.

### [Flask](#tab/flask)

:::code language="python" source="~/msdocs-python-flask-webapp-quickstart/app.py" range="6-21" highlight="3,12,15":::

### [Django](#tab/django)

:::code language="python" source="~/msdocs-python-django-webapp-quickstart/hello_azure/views.py" range="5-21" highlight="2,11,14":::

---

The contents of the App Service diagnostic logs can be reviewed in the Azure portal, VS Code, or using the Azure CLI.

### [Azure portal](#tab/azure-portal)

| Instructions    | Screenshot |
|:----------------|-----------:|
| [!INCLUDE [Stream logs from Azure portal 1](<./includes/quickstart-python/stream-logs-azure-portal-1.md>)] | :::image type="content" source="./media/quickstart-python/stream-logs-azure-portal-1-240px.png" alt-text="A screenshot of the location in the Azure portal where to enable streaming logs." lightbox="./media/quickstart-python/stream-logs-azure-portal-1.png"::: |
| [!INCLUDE [Stream logs from Azure portal 2](<./includes/quickstart-python/stream-logs-azure-portal-2.md>)] | :::image type="content" source="./media/quickstart-python/stream-logs-azure-portal-2-240px.png" alt-text="A screenshot of how to view logs in the Azure portal." lightbox="./media/quickstart-python/stream-logs-azure-portal-2.png"::: |

### [VS Code](#tab/vscode-aztools)

| Instructions    | Screenshot |
|:----------------|-----------:|
| [!INCLUDE [Stream logs from VS Code 1](<./includes/quickstart-python/stream-logs-visual-studio-code-1.md>)] | :::image type="content" source="./media/quickstart-python/stream-logs-vs-code-1-240px.png" alt-text="A screenshot of how to start streaming logs with the VS Code extension." lightbox="./media/quickstart-python/stream-logs-vs-code-1.png"::: |
| [!INCLUDE [Stream logs from VS Code 2](<./includes/quickstart-python/stream-logs-visual-studio-code-2.md>)] | :::image type="content" source="./media/quickstart-python/stream-logs-vs-code-2-240px.png" alt-text="A screenshot of an example of streaming logs in the VS Code Output window." lightbox="./media/quickstart-python/stream-logs-vs-code-2.png"::: |

### [Azure CLI](#tab/azure-cli)

First, you need to configure Azure App Service to output logs to the App Service filesystem using the [az webapp log config](/cli/azure/webapp/log#az-webapp-log-config) command.

[!INCLUDE [CLI stream logs configure](<./includes/quickstart-python/stream-logs-cli-1.md>)]

To stream logs, use the [az webapp log tail](/cli/azure/webapp/log#az-webapp-log-tail) command.

[!INCLUDE [CLI stream logs tail](<./includes/quickstart-python/stream-logs-cli-2.md>)]

Refresh the home page in the app or attempt other requests to generate some log messages. The output should look similar to the following.

```Output
Starting Live Log Stream ---

2021-12-23T02:15:52.740703322Z Request for index page received
2021-12-23T02:15:52.740740222Z 169.254.130.1 - - [23/Dec/2021:02:15:52 +0000] "GET / HTTP/1.1" 200 1360 "https://msdocs-python-webapp-quickstart-123.azurewebsites.net/hello" "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:95.0) Gecko/20100101 Firefox/95.0"
2021-12-23T02:15:52.841043070Z 169.254.130.1 - - [23/Dec/2021:02:15:52 +0000] "GET /static/bootstrap/css/bootstrap.min.css HTTP/1.1" 200 0 "https://msdocs-python-webapp-quickstart-123.azurewebsites.net/" "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:95.0) Gecko/20100101 Firefox/95.0"
2021-12-23T02:15:52.884541951Z 169.254.130.1 - - [23/Dec/2021:02:15:52 +0000] "GET /static/images/azure-icon.svg HTTP/1.1" 200 0 "https://msdocs-python-webapp-quickstart-123.azurewebsites.net/" "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:95.0) Gecko/20100101 Firefox/95.0"
2021-12-23T02:15:53.043211176Z 169.254.130.1 - - [23/Dec/2021:02:15:53 +0000] "GET /favicon.ico HTTP/1.1" 404 232 "https://msdocs-python-webapp-quickstart-123.azurewebsites.net/" "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:95.0) Gecko/20100101 Firefox/95.0"

2021-12-23T02:16:01.304306845Z Request for hello page received with name=David
2021-12-23T02:16:01.304335945Z 169.254.130.1 - - [23/Dec/2021:02:16:01 +0000] "POST /hello HTTP/1.1" 200 695 "https://msdocs-python-webapp-quickstart-123.azurewebsites.net/" "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:95.0) Gecko/20100101 Firefox/95.0"
2021-12-23T02:16:01.398399251Z 169.254.130.1 - - [23/Dec/2021:02:16:01 +0000] "GET /static/bootstrap/css/bootstrap.min.css HTTP/1.1" 304 0 "https://msdocs-python-webapp-quickstart-123.azurewebsites.net/hello" "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:95.0) Gecko/20100101 Firefox/95.0"
2021-12-23T02:16:01.430740060Z 169.254.130.1 - - [23/Dec/2021:02:16:01 +0000] "GET /static/images/azure-icon.svg HTTP/1.1" 304 0 "https://msdocs-python-webapp-quickstart-123.azurewebsites.net/hello" "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:95.0) Gecko/20100101 Firefox/95.0"
```

---

Having issues? Refer first to the [Troubleshooting guide](./configure-language-python.md#troubleshooting), otherwise, [let us know](https://aka.ms/PythonAppServiceQuickstartFeedback).

## Clean up resources

When you're finished with the sample app, you can remove all of the resources for the app from Azure. It will not incur extra charges and keep your Azure subscription uncluttered. Removing the resource group also removes all resources in the resource group and is the fastest way to remove all Azure resources for your app.

### [Azure portal](#tab/azure-portal)

Follow these steps while signed-in to the Azure portal to delete a resource group.

| Instructions    | Screenshot |
|:----------------|-----------:|
| [!INCLUDE [Remove resource group Azure portal 1](<./includes/quickstart-python/remove-resource-group-azure-portal-1.md>)] | :::image type="content" source="./media/quickstart-python/remove-resource-group-azure-portal-1-240px.png" alt-text="A screenshot of how to search for and navigate to a resource group in the Azure portal." lightbox="./media/quickstart-python/remove-resource-group-azure-portal-1.png"::: |
| [!INCLUDE [Remove resource group Azure portal 2](<./includes/quickstart-python/remove-resource-group-azure-portal-2.md>)] | :::image type="content" source="./media/quickstart-python/remove-resource-group-azure-portal-2-240px.png" alt-text="A screenshot of the location of the Delete Resource Group button in the Azure portal." lightbox="./media/quickstart-python/remove-resource-group-azure-portal-2.png"::: |
| [!INCLUDE [Remove resource group Azure portal 3](<./includes/quickstart-python/remove-resource-group-azure-portal-3.md>)] | :::image type="content" source="./media/quickstart-python/remove-resource-group-azure-portal-3-240px.png" alt-text="A screenshot of the confirmation dialog for deleting a resource group in the Azure portal." lightbox="./media/quickstart-python/remove-resource-group-azure-portal-3.png"::: |

### [VS Code](#tab/vscode-aztools)

| Instructions    | Screenshot |
|:----------------|-----------:|
| [!INCLUDE [Remove resource group VS Code 1](<./includes/quickstart-python/remove-resource-group-visual-studio-code-1.md>)] | :::image type="content" source="./media/quickstart-python/remove-resource-group-visual-studio-code-1-240px.png" alt-text="A screenshot of how to delete a resource group in VS Code using the Azure Tools extension." lightbox="./media/quickstart-python/remove-resource-group-visual-studio-code-1.png"::: |
| [!INCLUDE [Remove resource group VS Code 2](<./includes/quickstart-python/remove-resource-group-visual-studio-code-2.md>)] | :::image type="content" source="./media/quickstart-python/remove-resource-group-visual-studio-code-2-240px.png" alt-text="A screenshot of the confirmation dialog for deleting a resource group from VS Code." lightbox="./media/quickstart-python/remove-resource-group-visual-studio-code-2.png"::: |

### [Azure CLI](#tab/azure-cli)

Delete the resource group by using the [az group delete](/cli/azure/group#az-group-delete) command.

```azurecli
az group delete \
    --name msdocs-python-webapp-quickstart \
    --no-wait
```

The `--no-wait` argument allows the command to return before the operation is complete.

---

Having issues? [Let us know](https://aka.ms/PythonAppServiceQuickstartFeedback).

## Next steps

> [!div class="nextstepaction"]
> [Tutorial: Python (Django) web app with PostgreSQL](./tutorial-python-postgresql-app.md)

> [!div class="nextstepaction"]
> [Configure Python app](./configure-language-python.md)

> [!div class="nextstepaction"]
> [Add user sign-in to a Python web app](../active-directory/develop/quickstart-v2-python-webapp.md)

> [!div class="nextstepaction"]
> [Tutorial: Run Python app in custom container](./tutorial-custom-container.md) -->