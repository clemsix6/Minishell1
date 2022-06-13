# Minishell1

### Introduction

Le but du projet est de recréer un Shell en plusieurs parties.



### Shell

Un shell est un programme dont le rôle est d'interpreter des commandes reçus. Voici les plus connus:

| Name | Description                                                                                                                                                                                                                                                                                                                                                                                                                               |
| ---- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Bash | Bash, ou Bourne-Again Shell, est de loin le choix le plus largement utilisé et il est installé comme shell par défaut dans les distributions Linux les plus populaires.                                                                                                                                                                                                                                                                   |
| Zsh  | Zsh ou le Z-shell a été conçu dès le départ pour être interactif et incorporer certaines des meilleures fonctionnalités des shells plus anciens. Il fournit des fonctionnalités de script uniques, il est hautement personnalisable et facile à utiliser, avec correction orthographique, complétion de commandes ou remplacement de noms de fichiers.                                                                                    |
| Korn | KornShell (également connu sous le nom de ksh) est une très ancienne alternative bash qui a été développée dans les années 1980. Il est très similaire à bash mais se double d'un langage de programmation complet et puissant, il a donc un certain nombre de fans passionnés parmi les administrateurs système. Il n'est pas largement utilisé, il est donc un peu plus difficile de trouver de la documentation ou de l'aide en ligne. |
| Tcsh | Tcsh est une meilleure version du shell C (csh), qui a été développé à l'ère UNIX. Il est préféré par les programmeurs car sa syntaxe est très similaire au langage de programmation C, ils peuvent donc utiliser ses fonctionnalités de script sans avoir à apprendre bash. C'est également le shell par défaut des systèmes d'exploitation de la famille BSD.                                                                           |
| Fish | Fish, vise à être plus simple à utiliser et plus convivial que ses concurrents. C'est un excellent choix pour les débutants Linux, car il utilise des couleurs pour aider l'utilisateur. Par exemple, les commandes avec une syntaxe incorrecte sont affichées en rouge, tandis que les bonnes sont en bleu.                                                                                                                              |

Parmis tous ces shell notre objectif est de recoder Tcsh en raison de ses similitudes avec la programmation en C.



### Fonctionnalités

Le minishell1 embarque des fonctionnalités de bases de TCSH, parmis elles se trouvent:

* L'execution de programmes avec arguments
* Déplacement dans les dossier avec CD



### Examples

```
∼/B-PSU-101> ./mysh
$> pwd
/tmp
$> cd test
$> pwd
/tmp/test
```

```
∼/B-PSU-101> ./mysh
$> ls -l /usr /var
/usr:
total 72
drwxr-xr-x 2 root root 36864 Jan 6 17:24 bin
drwxr-xr-x 2 root root 4096 May 13 2019 games
drwxr-xr-x 36 root root 4096 Dec 14 11:15 include
drwxr-xr-x 54 root root 4096 Dec 14 11:15 lib
drwxr-xr-x 3 root root 4096 Apr 2 2020 libexec
drwxr-xr-x 10 root root 4096 Aug 3 2019 local
drwxr-xr-x 2 root root 4096 Jan 6 17:24 sbin
drwxr-xr-x 108 root root 4096 Jan 6 17:24 share
drwxr-xr-x 5 root root 4096 Apr 2 2020 src
/var:
total 40
drwxr-xr-x 2 root root 4096 May 13 2019 backups
drwxr-xr-x 11 root root 4096 Jan 6 17:24 cache
drwxr-xr-x 29 root root 4096 Jan 6 17:24 lib
drwxrwsr-x 2 root staff 4096 May 13 2019 local
lrwxrwxrwx 1 root root 9 Aug 3 2019 lock -> /run/lock
drwxr-xr-x 6 root root 4096 Apr 2 2020 log
drwxrwsr-x 2 root mail 4096 May 11 2020 mail
drwxr-xr-x 2 root root 4096 Aug 3 2019 opt
lrwxrwxrwx 1 root root 4 Aug 3 2019 run -> /run
drwxr-xr-x 5 root root 4096 Jan 13 2020 spool
drwxrwxrwt 2 root root 4096 Apr 2 2020 tmp
drwxr-xr-x 3 root root 4096 Jan 31 2020 www
```
