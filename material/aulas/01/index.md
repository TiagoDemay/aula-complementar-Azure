# 01 Introducao


## Virtualizacao


Acredita-se que o conceito de virtualização tenha suas origens nos dias do mainframe no final dos anos 1960 e início dos anos 1970, quando a IBM investiu muito tempo e esforço no desenvolvimento de soluções robustas de compartilhamento de tempo. "\n"
O compartilhamento de tempo refere-se ao uso compartilhado de recursos do computador entre um grande grupo de usuários, com o objetivo de aumentar a eficiência dos usuários e dos recursos dispendiosos do computador que eles compartilham. Esse modelo representou um grande avanço na tecnologia de computadores: o custo de fornecer capacidade de computação caiu consideravelmente e tornou-se possível e usar um computador sem realmente possuí-lo. Motivos semelhantes estão impulsionando a virtualização para a computação padrão do setor hoje: a capacidade em um único servidor é tão grande que é quase impossível para a maioria das cargas de trabalho usá-la com eficiência. A melhor maneira de melhorar a utilização de recursos e, ao mesmo tempo, simplificar o gerenciamento do data center é por meio da virtualização.

Os data centers hoje usam técnicas de virtualização para fazer abstração do hardware físico, criar grandes pools agregados de recursos lógicos que consistem em CPUs, memória, discos, armazenamento de arquivos, aplicativos, rede e oferecer esses recursos a usuários ou clientes na forma de agilidade, máquinas virtuais escaláveis ​​e consolidadas. Embora a tecnologia e os casos de uso tenham evoluído, o significado central da virtualização permanece o mesmo: permitir que um ambiente de computação execute vários sistemas independentes ao mesmo tempo.



## Nuvem?

Se você olhar para a história, na década de 1960 , quando os computadores eram muito caros, a IBM e a DEC (compaq e depois HP) costumavam fornecer seus computadores para compartilhamento de tempo. Você pode enviar tarefas para serem executadas em mainframes IBM. 
Em 1972 a IBM desenvolveu a primeira Máquina Virtual.
O símbolo da nuvem foi usado em 1977.
Uma vez que a internet e a world wide web entraram em cena, muitas empresas de telecomunicações ofereceram VPN ou rede virtual privada e a Compaq começou a oferecer espaço em disco online onde você poderia manter arquivos.
A própria palavra nuvem foi cunhada por Ramesh Chellappa em 1997. A palavra nuvem foi usada como uma metáfora para a Internet e o símbolo da nuvem foi usado para representar a rede de equipamentos de computação.  
Em 1999 , empresas de nuvem como Salesforce e VMWare foram incorporadas .
Em 2002 a Amazon lançou o Amazon Web Services , em 2006 o Hadoop foi lançado.
Em 2008 , o Google lançou o Google App Engine
m 2010 , a Mirosoft lançou o Microsoft Azure e, nos anos seguintes, quase todo mundo entrou na onda da computação em nuvem.





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
[link3](https://www.microsoftazuresponsorships.com/Balance)



### [Link-principal](https://azure.microsoft.com/en-us/offers/ms-azr-0170p/)

## Azure para estudantes

O Azure for Students permite que você comece com USD 100 em créditos do Azure para serem usados ​​nos primeiros 12 meses, além de alguns serviços gratuitos conforme descrito abaixo (serviços sujeitos a alterações) sem a necessidade de um cartão de crédito na inscrição. 

Aplique aqui -> [link](https://signup.azure.com/studentverification?offerType=1&correlationId=8abd48e0a9074fa18618e482a98ca754)



# Quickstart: Create a Linux virtual machine in the Azure portal


## Sign in to Azure

Sign in to the [Azure portal](https://portal.azure.com).

## Criando a primeira maquina virtual na Azure


[link-da-documentacao-oficial](https://docs.microsoft.com/en-us/azure/virtual-machines/windows/quick-create-portal#create-virtual-machine)

* Utilizar a subscription de Aluno
* Criar Resource Group
* Subir uma Maquina Virtual Windows
* Subir uma Maquina Virtual Linux
* Acessar ambas via RDP e SSH.



## Seguir as informacões em: Connect to virtual machine

Create an SSH connection with the VM.

1. If you are on a Mac or Linux machine, open a Bash prompt. If you are on a Windows machine, open a PowerShell prompt. 

1. At your prompt, open an SSH connection to your virtual machine. Replace the IP address with the one from your VM, and replace the path to the `.pem` with the path to where the key file was downloaded.

```console
ssh -i .\Downloads\myKey1.pem azureuser@<IP-publico-do-servidor>
```

## Clean up resources

When no longer needed, you can delete the resource group, virtual machine, and all related resources. To do so, select the resource group for the virtual machine, select **Delete**, then confirm the name of the resource group to delete.

