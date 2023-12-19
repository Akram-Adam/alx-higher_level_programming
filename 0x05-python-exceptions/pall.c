{"payload":{"allShortcutsEnabled":false,"fileTree":{"":{"items":[{"name":"bf","path":"bf","contentType":"directory"},{"name":"tests","path":"tests","contentType":"directory"},{"name":"README.md","path":"README.md","contentType":"file"},{"name":"add.c","path":"add.c","contentType":"file"},{"name":"addnode.c","path":"addnode.c","contentType":"file"},{"name":"div.c","path":"div.c","contentType":"file"},{"name":"execute.c","path":"execute.c","contentType":"file"},{"name":"free_stack.c","path":"free_stack.c","contentType":"file"},{"name":"main.c","path":"main.c","contentType":"file"},{"name":"mod.c","path":"mod.c","contentType":"file"},{"name":"monty","path":"monty","contentType":"file"},{"name":"monty.h","path":"monty.h","contentType":"file"},{"name":"mul.c","path":"mul.c","contentType":"file"},{"name":"nop.c","path":"nop.c","contentType":"file"},{"name":"pall.c","path":"pall.c","contentType":"file"},{"name":"pchar.c","path":"pchar.c","contentType":"file"},{"name":"pint.c","path":"pint.c","contentType":"file"},{"name":"pop.c","path":"pop.c","contentType":"file"},{"name":"pstr.c","path":"pstr.c","contentType":"file"},{"name":"push.c","path":"push.c","contentType":"file"},{"name":"queue.c","path":"queue.c","contentType":"file"},{"name":"rotl.c","path":"rotl.c","contentType":"file"},{"name":"rotr.c","path":"rotr.c","contentType":"file"},{"name":"stack.c","path":"stack.c","contentType":"file"},{"name":"sub.c","path":"sub.c","contentType":"file"},{"name":"swap.c","path":"swap.c","contentType":"file"}],"totalCount":26}},"fileTreeProcessingTime":2.691821,"foldersToFetch":[],"reducedMotionEnabled":null,"repo":{"id":503477526,"defaultBranch":"main","name":"monty","ownerLogin":"Dikachis","currentUserCanPush":false,"isFork":false,"isEmpty":false,"createdAt":"2022-06-14T18:32:54.000Z","ownerAvatar":"https://avatars.githubusercontent.com/u/99288026?v=4","public":true,"private":false,"isOrgOwned":false},"symbolsExpanded":false,"treeExpanded":true,"refInfo":{"name":"ee4e1b20ed409531ee0e827bb45e256edbbe8641","listCacheKey":"v0:1655235460.881386","canEdit":false,"refType":"tree","currentOid":"ee4e1b20ed409531ee0e827bb45e256edbbe8641"},"path":"pall.c","currentUser":null,"blob":{"rawLines":["#include \"monty.h\"","/**"," * f_pall - prints the stack"," * @head: stack head"," * @counter: no used"," * Return: no return","*/","void f_pall(stack_t **head, unsigned int counter)","{","\tstack_t *h;","\t(void)counter;","","\th = *head;","\tif (h == NULL)","\t\treturn;","\twhile (h)","\t{","\t\tprintf(\"%d\\n\", h->n);","\t\th = h->next;","\t}","}"],"stylingDirectives":[[{"start":0,"end":8,"cssClass":"pl-k"},{"start":9,"end":18,"cssClass":"pl-s"}],[{"start":0,"end":3,"cssClass":"pl-c"}],[{"start":0,"end":28,"cssClass":"pl-c"}],[{"start":0,"end":20,"cssClass":"pl-c"}],[{"start":0,"end":20,"cssClass":"pl-c"}],[{"start":0,"end":20,"cssClass":"pl-c"}],[{"start":0,"end":2,"cssClass":"pl-c"}],[{"start":0,"end":4,"cssClass":"pl-smi"},{"start":5,"end":11,"cssClass":"pl-en"},{"start":12,"end":19,"cssClass":"pl-smi"},{"start":20,"end":21,"cssClass":"pl-c1"},{"start":21,"end":22,"cssClass":"pl-c1"},{"start":22,"end":26,"cssClass":"pl-s1"},{"start":28,"end":40,"cssClass":"pl-smi"},{"start":37,"end":40,"cssClass":"pl-smi"},{"start":41,"end":48,"cssClass":"pl-s1"}],[],[{"start":1,"end":8,"cssClass":"pl-smi"},{"start":9,"end":10,"cssClass":"pl-c1"},{"start":10,"end":11,"cssClass":"pl-s1"}],[{"start":2,"end":6,"cssClass":"pl-smi"},{"start":7,"end":14,"cssClass":"pl-s1"}],[],[{"start":1,"end":2,"cssClass":"pl-s1"},{"start":3,"end":4,"cssClass":"pl-c1"},{"start":5,"end":6,"cssClass":"pl-c1"},{"start":6,"end":10,"cssClass":"pl-s1"}],[{"start":1,"end":3,"cssClass":"pl-k"},{"start":5,"end":6,"cssClass":"pl-s1"},{"start":7,"end":9,"cssClass":"pl-c1"},{"start":10,"end":14,"cssClass":"pl-c1"}],[{"start":2,"end":8,"cssClass":"pl-k"}],[{"start":1,"end":6,"cssClass":"pl-k"},{"start":8,"end":9,"cssClass":"pl-s1"}],[],[{"start":2,"end":8,"cssClass":"pl-en"},{"start":9,"end":15,"cssClass":"pl-s"},{"start":17,"end":18,"cssClass":"pl-s1"},{"start":18,"end":20,"cssClass":"pl-c1"},{"start":20,"end":21,"cssClass":"pl-c1"}],[{"start":2,"end":3,"cssClass":"pl-s1"},{"start":4,"end":5,"cssClass":"pl-c1"},{"start":6,"end":7,"cssClass":"pl-s1"},{"start":7,"end":9,"cssClass":"pl-c1"},{"start":9,"end":13,"cssClass":"pl-c1"}],[],[]],"csv":null,"csvError":null,"dependabotInfo":{"showConfigurationBanner":false,"configFilePath":null,"networkDependabotPath":"/Dikachis/monty/network/updates","dismissConfigurationNoticePath":"/settings/dismiss-notice/dependabot_configuration_notice","configurationNoticeDismissed":null,"repoAlertsPath":"/Dikachis/monty/security/dependabot","repoSecurityAndAnalysisPath":"/Dikachis/monty/settings/security_analysis","repoOwnerIsOrg":false,"currentUserCanAdminRepo":false},"displayName":"pall.c","displayUrl":"https://github.com/Dikachis/monty/blob/ee4e1b20ed409531ee0e827bb45e256edbbe8641/pall.c?raw=true","headerInfo":{"blobSize":"296 Bytes","deleteInfo":{"deleteTooltip":"You must be signed in to make or propose changes"},"editInfo":{"editTooltip":"You must be signed in to make or propose changes"},"ghDesktopPath":null,"gitLfsPath":null,"onBranch":false,"shortPath":"ea19c6c","siteNavLoginPath":"/login?return_to=https%3A%2F%2Fgithub.com%2FDikachis%2Fmonty%2Fblob%2Fee4e1b20ed409531ee0e827bb45e256edbbe8641%2Fpall.c","isCSV":false,"isRichtext":false,"toc":null,"lineInfo":{"truncatedLoc":"21","truncatedSloc":"20"},"mode":"file"},"image":false,"isCodeownersFile":null,"isPlain":false,"isValidLegacyIssueTemplate":false,"issueTemplateHelpUrl":"https://docs.github.com/articles/about-issue-and-pull-request-templates","issueTemplate":null,"discussionTemplate":null,"language":"C","languageID":41,"large":false,"loggedIn":false,"newDiscussionPath":"/Dikachis/monty/discussions/new","newIssuePath":"/Dikachis/monty/issues/new","planSupportInfo":{"repoIsFork":null,"repoOwnedByCurrentUser":null,"requestFullPath":"/Dikachis/monty/blob/ee4e1b20ed409531ee0e827bb45e256edbbe8641/pall.c","showFreeOrgGatedFeatureMessage":null,"showPlanSupportBanner":null,"upgradeDataAttributes":null,"upgradePath":null},"publishBannersInfo":{"dismissActionNoticePath":"/settings/dismiss-notice/publish_action_from_dockerfile","dismissStackNoticePath":"/settings/dismiss-notice/publish_stack_from_file","releasePath":"/Dikachis/monty/releases/new?marketplace=true","showPublishActionBanner":false,"showPublishStackBanner":false},"rawBlobUrl":"https://github.com/Dikachis/monty/raw/ee4e1b20ed409531ee0e827bb45e256edbbe8641/pall.c","renderImageOrRaw":false,"richText":null,"renderedFileInfo":null,"shortPath":null,"tabSize":8,"topBannersInfo":{"overridingGlobalFundingFile":false,"globalPreferredFundingPath":null,"repoOwner":"Dikachis","repoName":"monty","showInvalidCitationWarning":false,"citationHelpUrl":"https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/creating-a-repository-on-github/about-citation-files","showDependabotConfigurationBanner":false,"actionsOnboardingTip":null},"truncated":false,"viewable":true,"workflowRedirectUrl":null,"symbols":{"timedOut":false,"notAnalyzed":false,"symbols":[{"name":"f_pall","kind":"function","identStart":123,"identEnd":129,"extentStart":123,"extentEnd":167,"fullyQualifiedName":"f_pall","identUtf16":{"start":{"lineNumber":7,"utf16Col":5},"end":{"lineNumber":7,"utf16Col":11}},"extentUtf16":{"start":{"lineNumber":7,"utf16Col":5},"end":{"lineNumber":7,"utf16Col":49}}}]}},"copilotInfo":null,"copilotAccessAllowed":false,"csrf_tokens":{"/Dikachis/monty/branches":{"post":"Rn_4qD5BWSJHc-QbbqSsXXf_uBqzP929mOHuSsMDu51mYCdlXYAVQzgpSWIqqxQ2VVQnhIafLbQr9-erFJ1XKw"},"/repos/preferences":{"post":"P3SBjxeEFhbLAXmT--xcEeWX0Sm_arTSlbEqTAqztZSLGVlqCRLYIuNMSWf6U6tZZeSRMSfinWMnilASIubZLA"}}},"title":"monty/pall.c at ee4e1b20ed409531ee0e827bb45e256edbbe8641 · Dikachis/monty"}