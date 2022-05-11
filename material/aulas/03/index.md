# 03

# Inicio da Aula 3

Vamos utilizar a ferramenta Cli atrelado ao Web Browser Novamente.

Este link leva direto para um Container com as configuracoes ja feitas e as ferramentas já instaladas.
[Cloud-shell](https://portal.azure.com/#cloudshell/)

Antes de abrir irá perguntar BASH ou PowerShell..... escolher BASH


* O parâmetro --runtime especifica a versão do Python que o aplicativo está executando. Este exemplo usa Python 3.9. Para listar todos os runtimes disponíveis, use o comando az webapp list-runtimes --os linux --output table.
* O parâmetro --sku define o tamanho (CPU, memória) e o custo do plano do Serviço de Aplicativo. Este exemplo usa o plano de serviço B1 (Básico), que gerará um pequeno custo em sua assinatura do Azure. Para obter uma lista completa dos planos do Serviço de Aplicativo, exiba a página de Preço do Serviço de Aplicativo.
* O sinalizador --logs configura o log padrão necessário para habilitar a exibição do fluxo de log imediatamente após a inicialização do aplicativo Web.
* Opcionalmente, você pode especificar um nome com o argumento --name <app-name>. Se você não fornecer um, um nome será gerado automaticamente.
* Opcionalmente, você pode incluir o argumento --location <location-name>, em que <location_name> é uma região do Azure disponível. Você pode recuperar uma lista de regiões permitidas para sua conta do Azure executando o comando az account list-locations.

```console
az account list
```

```console
git clone https://github.com/Azure-Samples/msdocs-python-flask-webapp-quickstart
```

```console
az appservice list-locations --sku B1
```

```console
az webapp up \
    --runtime 'PYTHON:3.9' \
    --sku B1 \
    --location eastasia \
    --name MeuApp-Facil
```    

```console
az appservice plan list
```

# Implantar um aplicativo Python (Django ou Flask) com o PostgreSQL no Azure

[Documentacao-Oficial](https://docs.microsoft.com/pt-br/azure/app-service/tutorial-python-postgresql-app?tabs=flask%2Cmac-linux%2Cazure-cli%2Cterminal-bash%2Cazure-portal-access%2Cvscode-aztools-deploy%2Cdeploy-instructions-azportal%2Cdeploy-instructions--zip-azcli%2Cdeploy-instructions-curl-bash)