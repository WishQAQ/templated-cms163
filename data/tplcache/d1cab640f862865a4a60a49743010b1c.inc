<li><a title="菜单_二级_[field:title /]" href="[field:arcurl /]">
                                <div class="b nav-header">
                                    [field:title /]</div>
                                <div class="">
                                    [field:array runphp='yes'] if(@me['shorttitle']==”) @me=@me['title'];else @me=@me['shorttitle'];[/field:array]</div>
                            </a></li>