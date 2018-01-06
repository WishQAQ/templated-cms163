<div class="ej_nav1">
                    <div class="ej_nav11"><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a>：</div>
                    <div class="ej_nav12">{dede:sql sql='Select * from dede_arctype where reid=~id~ ORDER BY id limit 0,7'}<a href="[field:typedir/]">[field:typename/]</a>&nbsp;|&nbsp;{/dede:sql}</div>
                </div>