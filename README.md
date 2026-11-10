#SDD: ShutDown Dumb
---
Um software CLI simples para terminar um processo em segundo plano (daemon) em sistemas GNU/Linux com systemd. Seu objetivo é simples no fato de ser um
programa que depende de fatores externos como:

* O computador precisa estar em um no-break
* O cabo de ethernet deve estar plugada em um roteador fora do no-break
* Ambos (computador e roteador) devem estar na mesma rede elétrica
---
O funcionamento do programa é passar o nome ou PID do processo para quando houver queda de energina automaticamente o programa finaliza o processo por
systemd através do systemctl. De forma automática.
