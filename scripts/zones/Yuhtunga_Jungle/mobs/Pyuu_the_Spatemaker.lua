-----------------------------------
-- Area: Yuhtunga Jungle
--  MOB: Pyuu the Spatemaker
-----------------------------------

require("scripts/globals/fieldsofvalor");

-----------------------------------
-- onMobDeath
-----------------------------------

function onMobDeath(mob, player, isKiller)
    checkRegime(player,mob,127,1);
end;
