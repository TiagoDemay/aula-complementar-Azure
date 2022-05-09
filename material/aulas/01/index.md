# 01 Introducao


## Virtualizacao





## CSM

## Nuvem?

### O que é o Microsoft Azure?
O Azure é uma plataforma de computação em nuvem lançada pela Microsoft em fevereiro de 2010. É uma plataforma de nuvem aberta e flexível que auxilia no desenvolvimento, armazenamento de dados, hospedagem de serviços e gerenciamento de serviços. A ferramenta do Azure hospeda aplicativos Web pela Internet com a ajuda de data centers da Microsoft.


### Conceitos de chave do Azure
Agora, neste tutorial de noções básicas do Azure, veremos os principais conceitos do Azure, conforme listado abaixo:

| Nome do conceito | Descrição |
|---------------------------------------|---------------------------------------------------|
| Regions	|  O Azure é uma plataforma de nuvem global que está disponível em várias regiões do mundo. Quando você solicita um serviço, aplicativo ou VM no Azure, primeiro é solicitado que você especifique uma região. A região selecionada representa o datacenter onde seu aplicativo é executado.|
| Datacenter |	No Azure, você pode implantar seus aplicativos em vários data centers em todo o mundo. Portanto, é aconselhável selecionar uma região que esteja mais próxima da maioria dos seus clientes. Ele ajuda você a reduzir a latência nas solicitações de rede.|
| Azure portal |	O portal do Azure é um aplicativo baseado na Web que pode ser usado para criar, gerenciar e remover recursos e serviços do Azure. Ele está localizado em https://portal.azure.com.|
| Resources	|       O recurso do Azure é um computador individual, dados de rede ou serviços de hospedagem de aplicativos cobrados individualmente. Alguns recursos comuns são máquinas virtuais (VM), conta de armazenamento ou bancos de dados SQL.|
| Resource groups |	Um grupo de recursos do Azure é um contêiner que contém recursos relacionados para uma solução do Azure. Pode incluir todos os recursos ou apenas recursos que você deseja gerenciar.|
| Azure PowerShell	| O PowerShell é um conjunto de módulos que oferece cmdlets para gerenciar o Azure. Na maioria dos casos, você tem permissão para usar o comando cmdlets para as mesmas tarefas que está executando no portal do Azure.|
| Azure command-line interface(CLI)	| A CLI do Azure é uma ferramenta que você pode usar para criar, gerenciar e remover recursos do Azure da linha de comando.|
| REST APIs	|  O Azure é construído em um conjunto de APIs REST que ajudam você a executar a mesma operação que você faz no portal do Azure Ul. Ele permite que seus recursos e aplicativos do Azure sejam manipulados por meio de qualquer aplicativo de software de terceiros.|
                                                 





## Links para criar a Conta

[link1](https://azure.microsoft.com/en-us/free/)
[link2](https://azure.microsoft.com/en-us/free/students/)
[link3](https://azure.microsoft.com/en-us/offers/ms-azr-0170p/)
[link4](https://www.microsoftazuresponsorships.com/Balance)

## Azure para estudantes

O Azure for Students permite que você comece com USD 100 em créditos do Azure para serem usados ​​nos primeiros 12 meses, além de alguns serviços gratuitos conforme descrito abaixo (serviços sujeitos a alterações) sem a necessidade de um cartão de crédito na inscrição. 

Aplique aqui -> [link](https://signup.azure.com/studentverification?offerType=1&correlationId=8abd48e0a9074fa18618e482a98ca754)



# Quickstart: Create a Linux virtual machine in the Azure portal


## Sign in to Azure

Sign in to the [Azure portal](https://portal.azure.com).

## Create virtual machine

1. Type **virtual machines** in the search.
1. Under **Services**, select **Virtual machines**.
1. In the **Virtual machines** page, select **Create** and then **Virtual machine**.  The **Create a virtual machine** page opens.

1. In the **Basics** tab, under **Project details**, make sure the correct subscription is selected and then choose to **Create new** resource group. Type *myResourceGroup* for the name.*. 

	![Screenshot of the Project details section showing where you select the Azure subscription and the resource group for the virtual machine](./media/quick-create-portal/project-details.png)

1. Under **Instance details**, type *myVM* for the **Virtual machine name**, and choose *Ubuntu 18.04 LTS - Gen2* for your **Image**. Leave the other defaults. The default size and pricing is only shown as an example. Size availability and pricing are dependent on your region and subscription.

    :::image type="content" source="media/quick-create-portal/instance-details.png" alt-text="Screenshot of the Instance details section where you provide a name for the virtual machine and select its region, image, and size.":::

    > [!NOTE]
    > Some users will now see the option to create VMs in multiple zones. To learn more about this new capability, see [Create virtual machines in an availability zone](../create-portal-availability-zone.md).
    > :::image type="content" source="../media/create-portal-availability-zone/preview.png" alt-text="Screenshot showing that you have the option to create virtual machines in multiple availability zones.":::


1. Under **Administrator account**, select **SSH public key**.

1. In **Username** type *azureuser*.

1. For **SSH public key source**, leave the default of **Generate new key pair**, and then type *myKey* for the **Key pair name**.

    ![Screenshot of the Administrator account section where you select an authentication type and provide the administrator credentials](./media/quick-create-portal/administrator-account.png)

1. Under **Inbound port rules** > **Public inbound ports**, choose **Allow selected ports** and then select **SSH (22)** and **HTTP (80)** from the drop-down. 

	![Screenshot of the inbound port rules section where you select what ports inbound connections are allowed on](./media/quick-create-portal/inbound-port-rules.png)

1. Leave the remaining defaults and then select the **Review + create** button at the bottom of the page.

1. On the **Create a virtual machine** page, you can see the details about the VM you are about to create. When you are ready, select **Create**.

1. When the **Generate new key pair** window opens, select **Download private key and create resource**. Your key file will be download as **myKey.pem**. Make sure you know where the `.pem` file was downloaded, you will need the path to it in the next step.

1. When the deployment is finished, select **Go to resource**.

1. On the page for your new VM, select the public IP address and copy it to your clipboard.


	![Screenshot showing how to copy the IP address for the virtual machine](./media/quick-create-portal/ip-address.png)

[!INCLUDE [ephemeral-ip-note.md](../../../includes/ephemeral-ip-note.md)]

## Connect to virtual machine

Create an SSH connection with the VM.

1. If you are on a Mac or Linux machine, open a Bash prompt. If you are on a Windows machine, open a PowerShell prompt. 

1. At your prompt, open an SSH connection to your virtual machine. Replace the IP address with the one from your VM, and replace the path to the `.pem` with the path to where the key file was downloaded.

```console
ssh -i .\Downloads\myKey1.pem azureuser@10.111.12.123
```

> [!TIP]
> The SSH key you created can be used the next time your create a VM in Azure. Just select the **Use a key stored in Azure** for **SSH public key source** the next time you create a VM. You already have the private key on your computer, so you won't need to download anything.

## Install web server

To see your VM in action, install the NGINX web server. From your SSH session, update your package sources and then install the latest NGINX package.

```bash
sudo apt-get -y update
sudo apt-get -y install nginx
```

When done, type `exit` to leave the SSH session.


## View the web server in action

Use a web browser of your choice to view the default NGINX welcome page. Type the public IP address of the VM as the web address. The public IP address can be found on the VM overview page or as part of the SSH connection string you used earlier.

![Screenshot showing the NGINX default site in a browser](./media/quick-create-portal/nginx.png)

## Clean up resources

When no longer needed, you can delete the resource group, virtual machine, and all related resources. To do so, select the resource group for the virtual machine, select **Delete**, then confirm the name of the resource group to delete.

